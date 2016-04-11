/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file flatten-binary-tree-to-linked-list.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/08 14:17:09
 * @brief 
 *  
 **/
#include <cstdio>
#include <stack> 
#include <vector>

class TreeNode{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }

}

class Solution{
public:
    void flatten(TreeNode *root)
    {
        
    }
    void preOrder(TreeNode *root)
    {
        stack<TreeNode *> s;
        TreeNode *p = root;
        while(!s.empty() && NULL != p)
        {
            while(NULL != p->left )
            {
                visit(p);
                s.push_back(p);
                p = p->left;
            }
            if(NULL != p->right)
            {
                p = s.top();
                s.pop();
                p = p->right;
            }
        }
    }
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
