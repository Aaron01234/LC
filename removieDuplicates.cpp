/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file removieDuplicates.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/04/06 15:30:23
 * @brief 
 *  
 **/
#include<iostream>
#include<vector>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}

};

class Solution{
public:
    removeDuplicates(ListNode* head)
    {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode *prev = dummy;
        ListNode *cur = prev->next;
        while(cur)
        {
            if(*prev == *cur)
            {
                delete prev;
                prev = cur;
                ListNode* tmp = cur->next;
                delete cur;
                cur = tmp->next;
            }
            prev = cur;
            cur = cur->next;
        }
        //last one parser
        if(*prev == *cur)
        {
            delete prev;
            delete cur;
        }
    }

};


int main()
{
    Solution s = new Solution();


}
















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
