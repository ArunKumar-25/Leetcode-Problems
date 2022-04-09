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
    TreeNode* ConstructTree(vector<int>& postorder,int pStart,int pEnd,vector<int>& inorder,int iStart,int iEnd,map<int,int>&mp)
    {
        if(pStart>pEnd || iStart>iEnd) return NULL;
        TreeNode* root=new TreeNode(postorder[pEnd]);
        int iRoot=mp[postorder[pEnd]];
        int leftNums=iRoot-iStart;
        root->left=ConstructTree(postorder,pStart,pStart+leftNums-1,inorder,iStart,iRoot-1,mp);
        root->right=ConstructTree(postorder,pStart+leftNums,pEnd-1,inorder,iRoot+1,iEnd,mp);
          
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        
        TreeNode* root=ConstructTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};