#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         cin>>n>>k;
         vector<int>arr(n);
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.begin()+k);
         int j=0;
         for(int i=k;i<n;i++)
         {
             pq.push(arr[i]);
             if(pq.size()>k)
             {
                 arr[j++]=pq.top();
                 pq.pop();
             }
         }
         while(!pq.empty())
         {
             arr[j++]=pq.top();
             pq.pop();
         }
         for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
         cout<<'\n';
         
     }
	return 0;
}