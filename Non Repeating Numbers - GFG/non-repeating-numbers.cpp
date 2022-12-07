//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int _xor=0;
        for(auto x:nums)
            _xor^=x;
        int a=0,b=0;
        int mask=(_xor&(~_xor+1));
        int cnt=log2(mask);
        for(int i=0;i<nums.size();i++)
        {
            if(((nums[i]>>cnt)&1)==1)
            {
                a^=nums[i];
            }
            else
            {
                b^=nums[i];
            }
        }
        a=a^_xor;
        b=b^_xor;
        if(a<=b)
            return {a,b};
        return {b,a};
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends