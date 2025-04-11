//
//  job.cpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//
#include "job.hpp"

//-------------------------------------------
void Job::chooseJob(string kidName, int jobNumber) {
    kid = kidName;
    jobValue = jobNumber;
    status = working;
}

void Job::announceDone() {
    // Run this code after the job has been completed.
    cout << "Job is completed." << endl;
    done = true;
}
