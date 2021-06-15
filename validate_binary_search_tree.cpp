#include <iostream>
#include <vector>

//Definition for a binary tree node.
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void helper(TreeNode* node, vector<int>* visited){
  
  if (node->left != nullptr){
    helper(node->left, visited);
  }
  
  visited->push_back(node->val);

  if (node->right != nullptr){
    helper(node->right, visited);
  }
}



bool isValidBST(TreeNode* root) {
  vector<int> visited;
  TreeNode* cur = root;
  helper(cur, &visited);

  int val;
  if(visited.size() <== 2){
    return true;
  }

  for(int i=1;i<visited.size();i++){
    if(visited[i] < visited[i-1]){
      return false;
    }
    cout << visited[i] << ", ";
  }
  cout << endl; 
  return true;
}
