//
//  main.cpp
//  1276 - Number of Burgers with No Waste of Ingredients
//
//  Created by ynfMac on 2019/12/6.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        
        int t = tomatoSlices;
        int c = cheeseSlices;
        
        if ((t-2*c)%2==0 && (t-2*c)>=0) {
            int x = (t-2*c)/2;
            int y = c-x;
            if (y < 0) {
                return vector<int>();
            } else {
                return vector<int>{x,y};
            }
        }
        
        return vector<int>();
    }
};

int main(int argc, const char * argv[]) {
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
