//
//  powTestHelper.hpp
//  实现 pow(x, n)
//
//  Created by ynfMac on 2018/10/11.
//  Copyright © 2018年 ynfMac. All rights reserved.
//

#ifndef powTestHelper_hpp
#define powTestHelper_hpp

#include <iostream>
#include <ctime>

#include <cassert>
#include <string>

using namespace std;

namespace powTestHelper {
    void testPow(const string &powName,double (*pow)(double,int),double x,int n){
        clock_t startTime = clock();
        pow(x,n);
        clock_t endTime = clock();
        
        cout << powName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;  
    }
    
}

#endif /* powTestHelper_hpp */
