class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> queue;
        vector<vector<int>> path;
        vector<int> level;

        if( !root ) return path;
        queue.push(root);
        
        while( !queue.empty() ){
            level.clear();
            int size = queue.size();
            for ( int i = 0 ; i < size ; i++ ) {
                TreeNode* temp = queue.front();
                queue.pop();
                level.push_back(temp->val);
                if (temp->left) queue.push(temp->left);
                if (temp->right) queue.push(temp->right);
            }

            path.push_back(level);
        }

        return path;
    }
};
