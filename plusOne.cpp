/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file plusOne.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/25 14:59:26
 * @brief 
 *  
 **/
#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    void plusOne(vector<int> &digit)
    {
        int size = digit.size();
        digit[size-1]++;
        for(vector<int>::reverse_iterator r_iter=digit.rbegin(); r_iter+1 != digit.rend(); ++r_iter)
        {
            if (*r_iter == 10)
            {
                (*(r_iter+1))++;
                *r_iter = 0;
            }
        }
        if (digit[0] == 10)
        {
            digit[0] = 0;
            digit.insert(digit.begin(),1);
        }
    }

};

int main()
{
    int a[] = {9,9,9,9};
    vector<int> test(a,a+4);
    Solution *s = new Solution();
    s->plusOne(test);
    for(vector<int>::iterator iter=test.begin(); iter != test.end(); ++iter)
        cout<<*iter<<endl;
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
