//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int max_xor(int arr[] , int n)
    {
        //code here
        int maxx = 0, mask = 0;
        set<int>st;
        for(int i=31;i>=0;i--)
        {
            int newMaxx = maxx | (1 << i);
            for(int j=0;j<n;j++)
                st.insert(arr[j]&newMaxx);
            
            for (int prefix:st) 
            {
                if (st.count(newMaxx ^ prefix)) 
                {
                    maxx = newMaxx;
                    break;
                }
            }
            st.clear();
        }
        return maxx;
    }
    
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

        Solution ob;
		cout << ob.max_xor(a, n) << endl;

	}
}



// } Driver Code Ends