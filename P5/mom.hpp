//
//  mom.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#pragma once
#include "jobtable.hpp"

class Mom {
    
private:
    
    JobTable table;
    const string kids[4];
    int tid[4]; // Array of tids for kid threads
    <int> jobs;
    int time_t;
    int currentTime;
    
public:
    Mom();
    void initJobTable();
    void scan();
    void print();
}
