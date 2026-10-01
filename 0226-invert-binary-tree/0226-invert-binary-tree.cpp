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
    TreeNode* invertTree(TreeNode* head) {



        if(!head)return NULL;





        TreeNode* left = invertTree(head->left);
        TreeNode* right = invertTree(head->right);

         TreeNode* temp = head->left;
        head->left = head->right;
        head->right = temp;




        return head;
        
    }
};