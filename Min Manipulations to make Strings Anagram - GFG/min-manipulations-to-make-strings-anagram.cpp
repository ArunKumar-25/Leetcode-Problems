// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
    // your code here
    int cnt[26]={0};
    for(int i=0;i<N;i++)
    {
        cnt[S1[i]-'a']++;
        cnt[S2[i]-'a']--;
    }
    int res=0;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
            res+=abs(cnt[i]);
        
    }
    return res/2;
}