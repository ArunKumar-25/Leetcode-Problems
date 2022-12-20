//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int maxdiff=INT_MIN,diff=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(diff<0)
	            diff=0;
	        if(S[i]=='1')
	            diff--;
	        else
	            diff++;
	        
	        maxdiff=max(diff,maxdiff);
	    }
	    return maxdiff<0?-1:maxdiff;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends