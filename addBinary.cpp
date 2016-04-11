/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file addBinary.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/04/05 11:36:56
 * @brief 
 *  
 **/
#include<cstdio>
#include<iostream>
#include<vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):vale(x),next(NULL){}

};

class Solution{
public:
    ListNode* addBinary(ListNOde* l1, ListNode* l2)
    {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* l3 = new ListNode(-1);
        int c = 0;
        while(p1->next != NULL && p2->next != NULL)
        {
            int value = (*p1 + *p2 + c)/10;
            c = (*p1 + *p2 + c)%10;
            l3->next = new ListNode(value); 
        }
        if (c)l3->next = new ListNode(c);
        return l3;
    
    }



};




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
