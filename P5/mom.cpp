//
//  mom.cpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//

// Job Table class - Mom will own a single instance of this class, and pass a pointer to each Kid thread when it is created.
#include "mom.hpp"
//-------------------------------------
void Mom::initJobTable(){
    
    pthread_mutex_lock(&JobTable::mtx); //Locks the JobTable
    
    for (int k = 0; k < 10; k++) {
        table.jobs[k] = Job();
    }
    pthread_mutex_unlock(&JobTable::mtx); // Unlock the mutex
}

void Mom::scan(){
    
    //Scan the job Table looking for a finished job
    for (int k = 0; k < 10; k++) {
        if ((table.jobs[k].done = true)) {
            // move the job object to the vector of completed jobs
            completedJobs.push_back(table.jobs[k]);
            // replace k with a newly created job
            table.jobs[k] = Job();
        }
    }
    
}

void Mom::print(){
    
}

void Mom::run(){
    // Initialize the JobTable
    //Instatiate Kid K using kth name in array of kidNames and a pointer to the JobTable.
    // Store the Kid in mom's array of kids
    //Create a thread for the kid and store its tid in the array of tids.
    // Create a thread for the kid and store its tid in the array of tids. The parameter for thread creation should be a pointer to the current Kid. Have the thread execute a global static function named doKid(), described below.
}
