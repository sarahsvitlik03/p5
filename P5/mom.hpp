//
//  mom.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#pragma once
#include "jobtable.hpp"
#include "tools.hpp"
#include "job.hpp"
//---------------------------------------
class Mom {
    
private:
    
    JobTable table;
    const string kids[4];
    int tid[4]; // Array of tids for kid threads
    vector <Job> completedJobs;
    int time_t;
    int currentTime;
    
public:
    
    Mom() = default;
    void initJobTable();
    void scan();
    void print();
};
