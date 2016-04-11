/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file reverseBetween.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/04/05 15:46:09
 * @brief 
 *  
 **/
#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x);next(NULL){}

};

class Solution{}
public:
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode *prev = &dummy;
        for (int i = 0; i < m-1; +=i)
            prev = prev->next;
        ListNode* const head2 = prev;
        prev = head2->next;
        ListNode* cur = prev->next;
        for (int i = m; i < n; i++)
        {
            prev->next = cur->next;
            cur->next = head2->next;
            head2->next = cur;
            cur = prev->next;
        
        }
        return dummy.next;
    
    }

;


















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
