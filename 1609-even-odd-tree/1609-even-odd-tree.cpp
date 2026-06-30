/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {

        if (root == NULL)
            return true;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {

            int currSz = q.size();

            int currEl;

            if (level % 2)
                currEl = INT_MAX;
            else
                currEl = INT_MIN;

            for (int i = 0; i < currSz; i++) {

                TreeNode* currNode = q.front();
                q.pop();

                if (level % 2 == 0) {

                    // even level
                    if (currNode->val % 2 != 0) {
                        // odd value at even level

                        if (currEl >= currNode->val)
                            return false;
                        else
                            currEl = currNode->val;
                    }else return false;

                } else {
                    // odd level

                    if (currNode->val % 2 == 0) {

                        if (currEl <= currNode->val)
                            return false;
                        else
                            currEl = currNode->val;
                    }else return false;
                }

                if (currNode->left)
                    q.push(currNode->left);
                if (currNode->right)
                    q.push(currNode->right);
            }
            level++;
        }
        return true;
    }
};