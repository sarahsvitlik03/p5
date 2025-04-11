//
//  kid.cpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#include "kid.hpp"
//-----------------------------------
Kid::Kid(string& kidName, JobTable* table) : name(kidName), jobTable(table) {
    sigset_t set;
    
    sigemptyset(&set);
    sigaddset(&set, SIGQUIT);
    sigaddset(&set, SIGUSR1);
    
    pthread_sigmask(SIG_BLOCK, &set, NULL);
}

void Kid::print(){
    
}

void Kid::moodToday(){
    if (code == 0) {
        mood = lazy;
    }
    else if (code == 1) {
        mood = prissy;
    }
    else if ( code == 2) {
        mood = over_tired;
    }
    else if (code == 3){
        mood = greedy;
    }
    else if (code == 4) {
        mood = cooperative;
    }
    else {
        cout << "Error" << endl;
    }
}

void Kid::selectJob() {
    int index = -1; // To track the index of the chosen job
    int criteria = INT_MAX;  

    for (int k = 0; k < 10; k++) {
        if (jobTable->jobs[k].status == working || jobTable->jobs[k].status == complete) {
            continue;
        }
        if (code == 0) { // Lazy
            if (jobTable->jobs[k].heavy < criteria) {
                criteria = jobTable->jobs[k].heavy;
                index = k;
            }
        }
        else if (code == 1) { // Prissy
            if (jobTable->jobs[k].dirty < criteria) {
                criteria = jobTable->jobs[k].dirty;
                index = k;
            }
        }
        else if (code == 2) { // Overtired
            if (jobTable->jobs[k].slow < criteria) {
                criteria = jobTable->jobs[k].slow;
                index = k;
            }
        }
        else if (code == 3) { // Greedy
            if (jobTable->jobs[k].jobValue > criteria) {
                criteria = jobTable->jobs[k].jobValue;
                index = k;
            }
        }
        else if (code == 4) { // Cooperative
            index = 9;
            break;
        }
    }

    if (index != -1) {
        jobTable->jobs[index].chooseJob(name, index);
    }
}


void Kid::run(){
    
    sigset_t set;
    sigemptyset(&set);
    sigaddset(&set, SIGQUIT);
    sigaddset(&set, SIGUSR1);
    
    //pthread_sigaction(SIG_BLOCK, &set, NULL);
    //Using sigaction, figure out if the signal was set and set one of the shared flags to true. This will be seen by all flags
    
    //Run the function selectJob()
    
    // After a nap check the quit flag

    
}
