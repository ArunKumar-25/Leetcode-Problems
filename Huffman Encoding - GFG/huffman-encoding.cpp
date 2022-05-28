// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    struct Node{
	        int data;
	        Node* left;
	        Node* right;
	        Node(int d)
	        {
	            data=d;
	            left=NULL;
	            right=NULL;
	        }
	    };
	    struct cmp{
	      bool operator()(Node* a,Node* b)
	      {
	          return a->data>b->data;
	      }
	    };
	    void preorder(Node* root,string s,vector<string>&res)
	    {
	        if(!root)
	            return;
	        if(!root->left && !root->right)
	        {
	            res.push_back(s);
	        }
	        preorder(root->left,s+"0",res);
	        preorder(root->right,s+"1",res);
	       
	    }
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<Node*,vector<Node*>,cmp>pq;
		    for(int i=0;i<N;i++)
		    {
		        Node* temp=new Node(f[i]);
		        pq.push(temp);
		    }
		    while(pq.size()>1)
		    {
		        Node* left=pq.top();
		        pq.pop();
		        Node* right=pq.top();
		        pq.pop();
		        Node* parent=new Node(left->data+right->data);
		        parent->left=left;
		        parent->right=right;
		        pq.push(parent);
		    }
		    Node* root=pq.top();
		    pq.pop();
		    vector<string>res;
		    preorder(root,"",res);
		    return res;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
}  // } Driver Code Ends