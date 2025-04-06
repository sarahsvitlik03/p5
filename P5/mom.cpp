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
    
    //Scan the job
    
}
