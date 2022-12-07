//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
    string binaryPreviousNumber(string S)
    {
    	string res="";
    	int borrow=0;
    	for(int i=S.length()-1;i>=0;i--)
    	{
    	    
    	    if(i==S.length()-1)
    	    {
    	        if(S[i]=='1')
    	            res='0'+res;
    	        else
    	        {
    	            res='1'+res;
    	            borrow=1;
    	        }
    	    }
    	    else
    	    {
    	        if(borrow==1)
    	        {
    	            if(S[i]=='1')
    	            {
    	                res='0'+res;
    	                borrow=0;
    	            }
    	            else
    	            {
    	               res='1'+res;
    	               borrow=1;
    	            }
    	        }
    	        else
    	        {
    	            res=S[i]+res;
    	        }
    	    }
    	}
    	int x=0;
    	while(res[x]=='0')
    	    x++;
    	
    	return res.substr(x)==""?"0":res.substr(x);
    }
  
};

//{ Driver Code Starts.
int main() 
{

   
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout <<ob.binaryPreviousNumber(s);

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends