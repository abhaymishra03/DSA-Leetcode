/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:



    pair<int,bool> dfs(TreeNode* root) {

        if(root == NULL)return {0,true};


        pair<int,bool>left = dfs(root->left);
        pair<int,bool>right = dfs(root->right);



        return {max(left.first,right.first)+1,(abs(left.first-right.first)<=1) && right.second && left.second};
    }
    bool isBalanced(TreeNode* root) {


        return dfs(root).second;
        
    }
};