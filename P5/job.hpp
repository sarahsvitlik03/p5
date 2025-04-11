//
//  job.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//

#pragma once
#include "helper.hpp"
#include "tools.hpp"

class Job {
  
private:
    string kid;
    
public:
    int jobValue; // Calculated from the slow, dirty, heavy values
    bool done = false;
    short int slow;
    JobStatus status;
    short int dirty;
    short int heavy;
    Job () :  slow(rand() % 5 + 1), dirty(rand() % 5 + 1), heavy (rand() % 6), jobValue(0), kid(""), status (not_started){}
    void chooseJob (string kidName, int jobNumber);
    void announceDone ();
};
