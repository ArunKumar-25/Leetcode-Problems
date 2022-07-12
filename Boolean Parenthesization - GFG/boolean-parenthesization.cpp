// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    unordered_map<string,int>mp;
    int solve(string s,int i,int j,bool istrue)
    {
        if(i>j)
            return 0;
        if(i==j)
        {
            if(istrue)
                return s[i]=='T';
            else
                return s[i]=='F';
        }
        string temp=to_string(i)+" "+to_string(j)+" "+to_string(istrue);
        if(mp.find(temp)!=mp.end())
            return mp[temp];
        int ans=0;
        for(int k=i+1;k<=j-1;k+=2)
        {
            int lt=solve(s,i,k-1,true);
            int lf=solve(s,i,k-1,false);
            int rt=solve(s,k+1,j,true);
            int rf=solve(s,k+1,j,false);
            
            if(s[k]=='&')
            {
                if(istrue)
                    ans+=lt*rt;
                else
                    ans+=lf*rt+lt*rf+lf*rf;
            }
            if(s[k]=='|')
            {
                if(istrue)
                    ans+=lt*rt+lt*rf+lf*rt;
                else
                    ans+=lf*rf;
            }
            if(s[k]=='^')
            {
                if(istrue)
                    ans+=lt*rf+lf*rt;
                else
                    ans+=lf*rf+lt*rt;
            }
        }
        return mp[temp]=ans%1003;
    }
    int countWays(int N, string S){
        return solve(S,0,N-1,true);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends