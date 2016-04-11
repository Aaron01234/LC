/***************************************************************************
 * 
 * Copyright (c) 2014 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file Pascal_Triangle.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2014/07/25 11:37:07
 * @brief 
 *  
 **/
#include <iostream>
#include <string>

using namespace std;

class Solution{
public:
    void print_pascal(int k){
        int a[k][k];
        for (int i=0;i < k; ++i){
            for(int j=0;j <=i; ++j){
                if(j == 0 or j == i){
                    a[i][j]=1;  
                }else{
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
                cout<<a[i][j]<<"    ";
            }
            cout<<endl;
        }
        
    }


};

int main(){
    Solution solution = Solution();
    solution.print_pascal(5);
    return 0;
}




















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
