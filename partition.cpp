/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file partition.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/04/06 11:29:09
 * @brief 
 *  
 **/
#include<iostream>
#include<vector>

using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}

};

class Solution{
public:
    ListNode* partition(ListNode* head, int x)
    {
        ListNode left_dummy(-1);
        ListNode right_dummy(-1);
        auto left_cur = &left_dummy;
        auto right_cur = &right_dummy;
        for (ListNode* cur = head; cur != NULL; cur = cur->next)
        {
            if (*cur <= x)
            {
                left_cur->next = cur;
                left_cur = left->next;
            }else{
                right_cur->next = cur;
                right_cur = left->next;
            }
        }
        left_cur->next = right_dummy.next;
        return left_dummy.next;
    }


};




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
