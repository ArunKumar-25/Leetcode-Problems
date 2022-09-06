class Solution {
public:
    int solve(vector<int>& arr,int k)
    {
        int ans=1;
        int len=1;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if(i%2==k)
            {
                if(arr[i]>arr[i+1])
                    len++;
                else
                    len=1;
            }
            else
            {
                if(arr[i]<arr[i+1])
                    len++;
                else
                    len=1;
            }
            ans=max(ans,len);
        }
        return ans;
    }
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size()==1)
            return 1;
        return max(solve(arr,0),solve(arr,1));
    }
};