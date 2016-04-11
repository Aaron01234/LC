/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file search_rotated_number.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/18 15:22:23
 * @brief 
 *  
 **/
#include<cstdio>
#include<iostream>

using namespace std;

int search_rotated_number(int A[], int n, int target)
{
    int first = 0;
    int last = n;
    while(first != last)
    {
        int mid = (first + last)/2;
        if (mid == target)
            return mid;
        if (A[mid] == target)
            return mid;
        if (A[first] <= A[mid])
        {
            if(A[first] <= target && target <= A[mid])
            {
                last = mid;
            }
            else{
                first = mid;
            }
        }else{
            if(A[mid] <= target && target <= A[last])
            {
                first = mid;
            }else{
                last = mid;
            }
        
        }

    
    }
    return -1;

}

int main()
{
    int test[10] = {4,5,6,7,8,9,0,1,2,3};
    int res = search_rotated_number(test, 7, 8);
        cout<<res<<endl;
    return 0;
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
