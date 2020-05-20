//
//  main.cpp
//  733 - Flood Fill
//
//  Created by ynfMac on 2019/11/26.
//  Copyright © 2019 ynfMac. All rights reserved.
//

#include <iostream>

#include <vector>

using namespace std;
class Solution {
private:
    int C;
    int R;
    int newColor;
    int oldColor;
    int eara[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        C = image.size();
        if (C == 0) {
            return image;
        }
        
        R = image[0].size();
        if (R == 0) {
            return image;
        }
        
        if(!isArea(sr, sc)){
            return image;
        }
        
        
        this->newColor = newColor;
        this->oldColor = image[sr][sc];
        
        if (this->newColor == this->oldColor) {
            return image;
        }
        
        floodfill(image, sr, sc);
        return image;
    }
    
     void floodfill(vector<vector<int>>&A, int x,int y){
         if (A[x][y] != oldColor) {
             return;
         }
         
         A[x][y] = newColor;
         
        for (int i = 0; i < 4; i++) {
            int newX = x + eara[i][0];
            int newY = y + eara[i][1];
            if (isArea(newX,newY) && A[newX][newY] == oldColor) {
                floodfill(A, newX, newY);
            }
        }
    }
    
    bool isArea(int x ,int y){
        return x >= 0 && x < C && y >= 0 && y < R;
    }
};


int main(int argc, const char * argv[]) {
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
