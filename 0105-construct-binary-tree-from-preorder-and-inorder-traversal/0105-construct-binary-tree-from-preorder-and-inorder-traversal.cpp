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
private:
int search(vector<int>& arr,int st,int end,int val) {
    for(int i = st; i<=end;i++){
    if(arr[i]==val){
    return i;}
    }
    return -1;
}

TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int& idx,int left ,int right) {
    if(left>right)return NULL;

    TreeNode* root = new TreeNode(preorder[idx]);

    int inIdx = search(inorder,left,right,preorder[idx]);
    idx++;

    root->left = helper(preorder,inorder,idx,left,inIdx-1);
    root->right = helper(preorder,inorder,idx,inIdx+1,right);

    return root;
    
    
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int idx=0; 
    return helper(preorder,inorder,idx,0,inorder.size()-1);
    }
};