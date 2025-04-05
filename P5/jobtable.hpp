//
//  jobtable.hpp
//  P5
//
//  Created by Sarah Svitlik on 4/5/25.
//

class JobTable {
  
public:
    string jobs[10];
    static pthread_mutex_t mtx;
    bool quitFlag = false;
};

pthread_mutex_t JobTable::mtx = PTHREAD_MUTEX_INITIALIZER;
