/***************************************************************************
 * 
 * Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file search_for_a_range.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2014/07/23 15:32:48
 * @brief 
 *  
 **/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {  
public:  
    vector<int> searchRange(int A[], int n, int target) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        int l = 0;  
        int r = n-1;  
        while (l <= r)  
        {  
            int mid = l+(r-l)/2;  
            if (A[mid] >= target)//find the left most target   
                r = mid-1;  
            else if (A[mid] < target)  
                l = mid+1;  
        }  
        int left = l;  
        l = 0;   
        r = n-1;  
        while (l <= r)  
        {  
            int mid = l+(r-l)/2;  
            if (A[mid] > target)//find the right most target  
                r = mid-1;  
            else if (A[mid] <= target)  
                l = mid+1;  
        }  
        int right = r;  
        if(A[left] != target || A[right] != target)  
            left = right = -1;  
        vector<int> ans(2);  
        ans[0] = left;  
        ans[1] = right;  
        return ans;  
    }  
};  

int main(){
    int A[10]={1,2,3,4,4,4,4,8,9,10};
    Solution solution = Solution();
    vector<int> ans = solution.searchRange(A,10,4);
    cout<<ans[0]<<ans[1]<<endl;
}

















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
