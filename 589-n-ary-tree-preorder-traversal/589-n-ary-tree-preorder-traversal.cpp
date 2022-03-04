class Solution {
public:
    void rec(Node* root,vector<int>& ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        for(auto x:root->children){
            
            rec(x,ans);
                
        }
        return;
    
    }
    
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        rec(root,ans);
        return ans;
    }
    
};