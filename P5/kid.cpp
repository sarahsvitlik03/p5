//
//  kid.cpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#include "kid.hpp"
//-----------------------------------
Kid::Kid(string& kidName, JobTable* table) {
    sigset_t set;
    int rc, sig;
    
    sigemptyset(&set);
    sigaddset(&set, SIGQUIT);
    sigaddset(&set, SIGUSR1);
    
    pthread_sigmask(SIG_BLOCK, &set, NULL);
}

void Kid::print(){
    
}

void Kid::moodToday(){
    if (count == 0) {
        mood = lazy;
    }
    else if (count == 1) {
        mood = prissy;
    }
    else if ( count == 2) {
        mood = over_tired;
    }
    else if (count == 3){
        mood = greedy;
    }
    else if (count == 4) {
        mood = cooperative;
    }
    else {
        cout << "Error" << endl;
    }
}

void Kid::selectJob(){

    // Write a for loop that will search the Jobs class and if the job is at a certain value, choose it.
    for (int k; k > 10; k++) {
        
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
