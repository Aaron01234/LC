/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file increasing_triplet_subsequence.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/03 11:42:47
 * @brief 
 *  
 **/
#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        for(int i = 0; i < nums.size()-2; ++i)
        {
            if( nums[i+1] >= nums[i] && nums[i+2] >= nums[i+1] )
            {
                return true; 
            }else
            {
                i++;
            }
        }
        return false;
    }
};

//c++ 11
class Solution1 {
public:
    bool increasingTriplet(vector<int>& nums){
        int min1 = 0;
        int min2 = 0;
        for (auto num : nums)
        {
            if (num < min1)
                min1 = min2;
            else if (num <min2)
                min2 = num;
            else
                return true;

        }
        return false;
    
    }

};

int main()
{
    vector<int> test;
    int a[6] = {1,7,6,4,5,2};
    for (int i  = 0; i != 6; ++i)
    {
        test.push_back(a[i]);
    }
    Solution *s = new Solution();
    bool res = s->increasingTriplet(test);
    if(true == res)
    {
        cout<<"true"<<endl;

    }else
    {
        cout<<"false"<<endl;
    }
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
