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
int search(vector<int>& arr,int st,int end,int val) {
    for(int i = st; i<=end;i++){
    if(arr[i]==val){
    return i;}
    }
    return -1;
}
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int& idx , int left , int right ) {

        // base condition
        if(left>right)return NULL;

        TreeNode* root = new TreeNode(postorder[idx]);
        idx--;
        int inIdx = search(inorder,left,right,root->val);

        root->right = helper(inorder,postorder,idx,inIdx+1,right);
        root->left = helper(inorder,postorder,idx,left,inIdx-1);

        return root;

    }



    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {


        int idx = postorder.size()-1;

        return helper(inorder , postorder , idx , 0 ,inorder.size()-1);
        
    }
};