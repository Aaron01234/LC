/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file twoSum.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/24 17:34:47
 * @brief 
 *  
 **/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Solution
{
public:
    vector<int> twoSum(vector<int> &num, int target)
    {
        unordered_map<int, int>  mapping;
        for (int i = 0; i < num.size(); ++i)
        {
            mapping[num[i]] = i;
        }
        int gap = 0;
        vector<int > res;
        for (auto i : num)
        {
            gap = target - i;
            cout<<"i="<<i<<"gap="<<gap<<endl;
            if(mapping.find(gap) != mapping.end())
            {
                res.push_back(mapping[gap]+1);
                res.push_back(mapping[i]+1);
                break;
            }
        }
        return res;
    
    }

};



int main()
{
    Solution *s = new Solution();
    vector<int> res;
    int num1[] = {1,7,8,4,2};
    int count = sizeof(num1)/sizeof(int);
    vector<int> test(num1, num1+count);
    res = s->twoSum(test, 10);
    cout<<res[0]<<"-"<<res[1]<<endl;
    return 0;

}














/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
