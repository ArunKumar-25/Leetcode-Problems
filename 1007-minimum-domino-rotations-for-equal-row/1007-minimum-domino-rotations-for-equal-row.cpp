class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int>countA(7),countB(7),countSame(7);
        int n=tops.size();
        for(int i=0;i<n;i++)
        {
            countA[tops[i]]++;
            countB[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                countSame[tops[i]]++;
        }
        int res=n;
        for(int i=1;i<=6;i++)
        {
            if(countA[i]+countB[i]-countSame[i]==n)
            {
                int mini=min(countA[i],countB[i])-countSame[i];
                res=min(res,mini);
            }
            
        }
        return res==n?-1:res;
    }
};