// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    void insertHeap(int &x)
    {
        if(maxheap.empty() || maxheap.top()>=x)
            maxheap.push(x);
        else
            minheap.push(x);
            
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int diff=maxheap.size()-minheap.size();
       if(abs(diff)>1)
       {
           if(maxheap.size()>minheap.size())
           {
               minheap.push(maxheap.top());
               maxheap.pop();
           }
           else
           {
               maxheap.push(minheap.top());
               minheap.pop();
           }
       }     
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(minheap.size()==maxheap.size())
        {
            return (minheap.top()+maxheap.top())/2;
        }
         return maxheap.size()>minheap.size() ? maxheap.top():minheap.top();
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends