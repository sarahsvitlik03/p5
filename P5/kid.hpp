//
//  kid.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//

#pragma once
#include "helper.hpp"

class Kid (){
    
private:
    
    string name;
    Mood mood;
    <int> completedJobs;
    
public:
    Kid(string& kidName, Mood kidMood); //reate an empty signalset, add SIGUSR1 and SIGQUIT, and attach it to the thread by calling pthread_sigmask().
    void print();
    void moodToday();
    void selectJob();
    void run();
    
}
