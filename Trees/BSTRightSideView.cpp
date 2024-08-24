class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                level.push_back(node->val);
            }
            reverse(level.begin(),level.end());
            ans.push_back(level);
        }
        for(int i=0;i<ans.size();i++)
        {
            v.push_back(ans[i][0]);
        }
        return v;
    }
};