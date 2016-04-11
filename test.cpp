/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/06 18:47:37
 * @brief 
 *  
 **/
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iostream>

using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

int main()
{
    int a[] = {1,7,8,4,2};
    int count = sizeof(a)/sizeof(int);
    vector<int>  test(a,a+count);
    for(auto i : test)
    {
        cout<<i<<"+"<<test[i]<<endl;
    }
    return 0;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
