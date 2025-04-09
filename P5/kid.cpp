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
    
}

void Kid::run(){
    
}
