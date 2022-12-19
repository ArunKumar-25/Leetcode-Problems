//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return maximum XOR subset in set[]

class Solution
{
    public:
    int maxSubsetXOR(int arr[], int n)
    {
        //Your code here
        int idx=0;
        for(int i=31;i>=0;i--)
        {
            int maxidx=idx;
            int maxele=INT_MIN;
            for(int j=idx;j<n;j++)
            {
                if((arr[j]&(1<<i))!=0 && arr[j]>maxele)
                    maxele=arr[j],maxidx=j;
            }
            if(maxele==INT_MIN)
                continue;
            swap(arr[idx],arr[maxidx]);
            maxidx=idx;
            for (int j=0;j<n;j++)
            {
                if (j!=maxidx && (arr[j]&(1<<i))!=0)
                    arr[j]=arr[j]^arr[maxidx];
            }
            idx++;
        }
        int res=0;
        for(int i=0;i<n;i++)
            res^=arr[i];
        return res;
    }
};

//{ Driver Code Starts.
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
       scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        Solution obj;
        printf("%d\n",obj.maxSubsetXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;
    }
}
// } Driver Code Ends