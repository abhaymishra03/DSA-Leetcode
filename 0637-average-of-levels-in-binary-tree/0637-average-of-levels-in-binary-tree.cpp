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
    vector<double> averageOfLevels(TreeNode* root) {



        if(root == NULL)return {};



        queue<TreeNode*>q;

        q.push(root);

        vector<double>ans;


        while(!q.empty()) {

            int sz = q.size();
            double avg = 0;


            for(int i = 0 ; i < sz ; i++) {

                TreeNode* curr = q.front();
                q.pop();


                avg+=curr->val;

                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);

            }


            ans.push_back(avg/sz);
        }
        return ans;
    }
};