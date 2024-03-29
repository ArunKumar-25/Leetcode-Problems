//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int res=0;
        for(int i=31;i>=0;i--)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if((a[j]&(1<<i))!=0)
                    cnt++;
            }
            if(cnt>n/2)
                res+=(1<<i);
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(res==a[i])
                cnt++;
        }
        return cnt>n/2?res:-1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends