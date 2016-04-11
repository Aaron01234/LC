/***************************************************************************
 * 
 * Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_find_left.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2014/07/24 17:16:47
 * @brief 
 *  
 **/
#include <iostream>
#include <string>

using namespace std;

void find_left_most(int A[], int n, int target){
    int begin = 0;
    int end = n -1;
    int mid;
    while(begin <= end){
        mid = (begin + end)/2;
        if(A[mid] >= target){
            end = mid -1;
        }else{
            begin = mid +1;
        }
    }
    int l = begin;
    begin = 0;
    end = n-1;
    while(begin <=  end){
        mid = (begin + end)/2;
        if (A[mid] > target){
            end = mid - 1;
        }else{
            begin = mid +1 ;
        }
    }
    int r = end;
    cout <<l<<" "<<mid<<endl; 
    cout <<r<<" "<<mid<<endl; 

}

int main(int argv, char **args){
    int A[13] = {1,2,3,3,3,3,3,8,9,10,10,10,11};
    find_left_most(A, 13, 11);
    return 0;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
