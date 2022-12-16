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
        int maxx = 0, mask = 0;
        set<int> s;
        for (int i = 30; i >= 0; i--) 
        {
            mask |= (1 << i);
            for (int i = 0; i < n; ++i)
                s.insert(arr[i] & mask);
            int newMaxx = maxx | (1 << i);
            for (int prefix:s) 
            {
                if (s.count(newMaxx ^ prefix)) 
                {
                    maxx = newMaxx;
                    break;
                }
            }
            s.clear();
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