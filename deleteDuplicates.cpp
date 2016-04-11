/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file deleteDuplicates.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/04/06 11:44:37
 * @brief 
 *  
 **/
#include<iostream>
#include<vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next = NULL;
    ListNode(int x):val(x),next(NULL){}


};

class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head == NULL)return NULL;
        for(ListNode *prev = head, *cur =head->next;cur;cur = cur->next )
        {
            if(*prev->next == *cur)
            {
                prev->next = cur->next;
                delete cur;
            }else{
                prev= cur;
            }
        }
        return head; 
    }


};





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
