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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> data;

        data.push(root);
        while(!data.empty()){
            int s=data.size();
            vector<int> tempAns;
            for(int i=0;i<s;i++){
                TreeNode* temp=data.front();
                data.pop();
                tempAns.push_back(temp->val);
                if(temp->left) data.push(temp->left);
                if(temp->right) data.push(temp->right);
            }

            ans.push_back(tempAns);

        }
        return ans;
    }
};