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

        if(root == NULL )
        return {};

        vector<vector<int>>ans;

        deque<TreeNode*>q;
        q.push_back(root);

        bool rev = false;


        while(!q.empty()) {

            int currSz = q.size();

            vector<int>curr= {};

            for(int i = 0 ; i < currSz ; i++ ) {


                if(rev){
                    // reverse case 




                
                    TreeNode* currNode = q.back();
                    q.pop_back();
                    curr.push_back(currNode->val);

                    if(currNode->right)
                    q.push_front(currNode->right);
                    if(currNode->left)
                    q.push_front(currNode->left);
                    
                    
                    }

                else {
                    // normal case 
                    TreeNode* currNode = q.front();
                    q.pop_front();
                    curr.push_back(currNode->val);

                    if(currNode->left)
                    q.push_back(currNode->left);
                    if(currNode->right)
                    q.push_back(currNode->right);


                }


                

               



            }

            ans.push_back(curr);

            rev = !rev;

          
                
            }




        


        return ans;

        
    }
};