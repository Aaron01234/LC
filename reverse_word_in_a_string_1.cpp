/***************************************************************************
 * 
 * Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file reverse_word_in_a_string_1.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2014/07/23 14:44:55
 * @brief 
 *  
 **/

#include<iostream>
#include<string>

using namespace std;

class Solution {

public:
    void reverseWords(string &s){
        string ss;
        int i = s.length() - 1;

        while(i >= 0){
            while(i>=0 and s[i] == ' '){
                i--;
            }
            if ( i < 0)break;
            string temp;
            if (ss.length() != 0){
                ss.push_back(' ');
            }
            for (;s[i] != ' '&&i>=0; --i){
                temp.push_back(s[i]);
            }
            reverse(temp.begin(),temp.end());
            ss.append(temp);
        }
        s=ss;
    }

};


int main(){
    Solution solution = Solution();
    string test="a";
    solution.reverseWords(test);
    cout<<test<<endl;
    return 0;
}


















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
