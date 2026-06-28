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
    int widthOfBinaryTree(TreeNode* root) {

        if(root == NULL)
        return 0;

    queue<pair<TreeNode* ,unsigned long long >>q;
    q.push({root,0});

    unsigned long long maxWidth = 0;

    while(!q.empty()) {
        int sz = q.size();

    
        unsigned long long minIdx = q.front().second;
        unsigned long long maxIdx = q.front().second;
        for(int i = 0; i < sz; i++) {
            pair<TreeNode*,unsigned long long>p = q.front();
            q.pop();
            if(p.first->left) 
            q.push({p.first -> left , 2*p.second+1});
            if(p.first->right) 
            q.push({p.first -> right , 2*p.second+2});

            minIdx = min(minIdx,p.second);
            maxIdx = max(maxIdx,p.second);


            maxWidth = max(maxWidth ,maxIdx-minIdx+1);
        }
    }
      return (int)maxWidth;  
    }
};