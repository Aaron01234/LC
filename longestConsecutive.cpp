/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file longestConsecutive.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/24 11:32:36
 * @brief 
 *  
 **/
#include<cstdio>
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution{
public:
    int longestConsecutive(const vector<int> &num)
    {
        unordered_map<int, bool> used;
        for (auto i : num) used[i] = false;
        int length = 1;
        int longest = 0;
        for (auto i : num)
        {
            if(used[i])continue;
            used[i] = true;
            for (int j = i+1; used.find(j) != used.end(); ++j)
            {
                used[j] = true;
                length++;
            }
            for (int j = i-1; used.find(j) != used.end(); --j)
            {
                used[j] = true;
                length--;
            }
            longest = max(longest, length);
        }
        return longest;
    
    
    }



};




int main()
{
    Solution *solution = new Solution();
    int num[] = {1,2,200,3,100,6,30,5,4};
    int count = sizeof(num)/sizeof(int);
    vector<int> test(num, num+count);
    int res = solution->longestConsecutive(test);
    cout<<res<<endl;
    return 0;
}
    
















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
