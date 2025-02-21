class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int> path;
        inorder(root, path);
        for ( int i = 0; i < path.size()-1; i++ ){
            if (path[i] >= path[i+1] )   return false;
        }

        return true;
    }

    void inorder( TreeNode* root, vector<int> &path ){
        if (!root) return;
        inorder( root->left, path );
        path.push_back(root->val);
        inorder( root->right, path );
    }
};
