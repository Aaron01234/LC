/***************************************************************************
 * 
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file binary_tee_paths.cpp
 * @author wangsirui01(com@baidu.com)
 * @date 2016/03/08 11:23:01
 * @brief 
 *  
 **/
class Solution {
public:
    /**
     * @param root the root of the binary tree
     * @return all root-to-leaf paths
     */
    vector<string> binaryTreePaths(TreeNode* root) {
        // Write your code here
        vector<string> out;
        string path;
        print_all_path(root, path, out);
        
        return out;
    }
  void print_all_path(TreeNode* root, string path, vector<string> &out)
  {
      if (root == NULL)
          return;
      char tmp[2];
      sprintf(tmp,"%d",root->val);
      if (root->left == NULL && root->right == NULL) {
          //cout<<root->val<<endl;
          //char tmp[2];
          //sprintf(tmp,"%d",root->val);
          path += string(tmp);
          out.push_back(path);
          return;
      }else
      {
       
        path += string(tmp)+"->";
        //cout<<root->val<<endl;
        //cout<<path<<endl;
        print_all_path(root->left, path, out);
        print_all_path(root->right, path, out);
      }
 }
};





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
