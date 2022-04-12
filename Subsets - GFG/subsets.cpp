// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(int i,vector<int>& A,vector<int>&ds,vector<vector<int>>&res)
    {
        if(i>=A.size())
        {
            res.push_back(ds);
            return;
        }
        ds.push_back(A[i]);
        solve(i+1,A,ds,res);
        ds.pop_back();
        solve(i+1,A,ds,res);
        
    }
    
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,A,ds,res);
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends