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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {


        if(root == NULL)return {};


        deque<TreeNode*>q;

        q.push_back(root);

        vector<vector<int>>ans;


        bool rev = false;


        while(!q.empty()) {

            int sz = q.size();
            vector<int>level;


            while(sz){
                if(!rev) {
                // normalcase 

                TreeNode* curr = q.front();
                q.pop_front();

                level.push_back(curr->val);

                if(curr->left)
                q.push_back(curr->left);
                if(curr->right)
                q.push_back(curr->right);
            }else{


                TreeNode* curr = q.back();
                q.pop_back();

                level.push_back(curr->val);

                if(curr->right)
                q.push_front(curr->right);
                if(curr->left)
                q.push_front(curr->left);



            }

            sz--;
            }


            ans.push_back(level);
            rev=!rev;
        }
        return ans;
    }
};