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
        pair<bool,int>helper(TreeNode* root) {
            //Base Case
            if ( root == NULL) 
            return {true, 0};


            pair<bool,int> leftHt =  helper(root -> left);
            pair<bool,int> rightHt =  helper(root -> right);
            
            

            return {abs(leftHt.second - rightHt.second) <= 1
            && leftHt.first
            && rightHt.first  , max(leftHt.second , rightHt.second)+1};


        }



    bool isBalanced(TreeNode* root) {


        


        return helper(root).first;
        
    }
};