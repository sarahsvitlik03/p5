//
//  kid.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#pragma once
#include "tools.hpp"
#include "helper.hpp"
#include <pthread.h>
#include <signal.h>
#include "jobtable.hpp"
//----------------------------------------
class Kid {
    
private:
    string name;
    Moods mood;
    vector <int> cJobs;
    JobTable* jobTable;
    int code;
    
public:
    Kid(string& kidName, JobTable* table);
    void print();
    void moodToday();
    void selectJob();
    void run();
    
};


static void* kidMain(void* arg){
     Kid* kid = static_cast<Kid*> (arg);
    //kid-> run();
    return nullptr;
 }
