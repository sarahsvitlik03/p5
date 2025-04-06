//
//  mom.cpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
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
