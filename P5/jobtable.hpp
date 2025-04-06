//
//  jobtable.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#include "job.hpp"
#include <pthread.h>
//-------------------------------------
class JobTable {
  
public:
    Job jobs[10];
    static pthread_mutex_t mtx;
    bool quitFlag = false;
};

pthread_mutex_t JobTable::mtx = PTHREAD_MUTEX_INITIALIZER;

// This will be the third parameter for the thread creation command
/* static kidMain(){
    // Transfer control to the OO world.
} */ 
