class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(!root){
            return {};
        }
        
        vector<int> res;
        stack<TreeNode*> track;
        track.push(root);
        
        while(!track.empty()){
            
            TreeNode* node = track.top();
            if(node == nullptr){
                track.pop();
                res.push_back(track.top()->val);
                track.pop();
            } else if(track.top()->left == nullptr && track.top()->right == nullptr){
                res.push_back(track.top()->val);
                track.pop();
            } else{
                track.push(nullptr);
                if(node->right != nullptr){
                    track.push(node->right);
                } 
                
                if(node->left != nullptr){
                    track.push(node->left);
                }
            }
        }
                
        return res;
    }
};