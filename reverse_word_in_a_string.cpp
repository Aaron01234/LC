/***************************************************************************
 * 
 * Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file reverse_word_in_a_string_1.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2014/07/22 20:42:19
 * @brief 
 *  
 **/
#include<string>
#include<iostream>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        string ss;
        int  i = s.length() - 1;
        int j = i;
        string tmpWord;
        char preChar = s[i];
        
        while(i >= 0){
            if (preChar == ' ' and s[i] == ' '){
                i--;
                continue;
            }
            if(s[i] != ' ' and i != 0  ){
                tmpWord.push_back(s[i]);    
            }
            else{
                if (i == 0 and s[i] != ' ')
                {
                    tmpWord.push_back(s[i]);    
                
                }
                reverse(tmpWord.begin(),tmpWord.end());
                ss.append(tmpWord);
                tmpWord = "";
                if (i != 0){
                    ss.push_back(' ');
                }
            }
            preChar = s[i];
            i--;
          }
          if(ss[ss.length()-1] == ' '){
            ss=ss.substr(0,ss.length()-1);
          }
          s=ss;
    }       
 };

int main(){
    Solution solution = Solution();
    string testStr = "    ";
    solution.reverseWords(testStr);
    cout<<testStr<<testStr.length()<<endl;
    return 0;
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
