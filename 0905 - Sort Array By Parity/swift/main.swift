//
//  main.swift
//  0905 - Sort Array By Parity
//
//  Created by ynfMac on 2020/6/13.
//  Copyright © 2020 ynfMac. All rights reserved.
//  使用两路快排(双指针)，循环遍历，遇到奇数就与后面的元素交换

import Foundation

class Solution {
    func sortArrayByParity(_ A: [Int]) -> [Int] {
        
        var B = A
        var i = 0
        var j = A.count
        
        while i  <   j {
            if B[i] % 2 == 1 {
                j -= 1
                B.swapAt(i, j)
                
            } else {
                i += 1;
            }
        }
        return B
    }
}



