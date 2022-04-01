// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int findminTime(map<Node*,Node*>&mp, Node* target)
    {
        map<Node*,int>vis;
        queue<Node*>q;
        q.push(target);
        vis[target]=1;
        int minTime=0;
        while(!q.empty())
        {
            int size=q.size();
            int f=0;
            for(int i=0;i<size;i++)
            {
                Node* curr=q.front();
                q.pop();
                if(curr->left && !vis[curr->left])
                {
                    f=1;
                    q.push(curr->left);
                    vis[curr->left]=1;
                }
                if(curr->right && !vis[curr->right])
                {
                    f=1;
                    q.push(curr->right);
                    vis[curr->right]=1;
                }
                if(mp[curr] && !vis[mp[curr]])
                {
                    f=1;
                    q.push(mp[curr]);
                    vis[mp[curr]]=1;
                }
            }
            if(f)
             minTime++;
        }
        return minTime;
    }
    
    Node* parent(Node* root, map<Node*,Node*>&mp, int target)
    {
        queue<Node*>q;
        q.push(root);
        Node* res;
        while(!q.empty())
        {
            Node* curr=q.front();
            q.pop();
            if(curr->data==target) res=curr;
            if(curr->left)
            {
                q.push(curr->left);
                mp[curr->left]=curr;
            }
            if(curr->right)
            {
                q.push(curr->right);
                mp[curr->right]=curr;
            }
        }
        return res;
    }
    
    int minTime(Node* root, int target) 
    {
        map<Node*,Node*>mp;
        Node* tar=parent(root,mp,target);
        int minTime=findminTime(mp,tar);
        return minTime;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends