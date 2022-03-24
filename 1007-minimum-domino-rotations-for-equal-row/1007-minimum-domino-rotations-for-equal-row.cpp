class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int,int>mp1,mp2;
        int n=tops.size();
        for(int i=0;i<n;i++)
        {
            mp1[tops[i]]++;
            mp2[bottoms[i]]++;
        }
        int fir1,fir2,sec1=0,sec2=0;
        for(auto it:mp1)
        {
            if(it.second>sec1)
            {
                fir1=it.first;
                sec1=it.second;
            }
        }
        for(auto it:mp2)
        {
            if(it.second>sec2)
            {
                fir2=it.first;
                sec2=it.second;
            }
        }
        int res=0;
        if(sec1>=sec2)
        {
            for(int i=0;i<n;i++)
            {
                if(bottoms[i]==fir1 && tops[i]!=fir1)
                    res++;
                else if(bottoms[i]!=fir1 && tops[i]!=fir1)
                    return -1;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(tops[i]==fir2 && bottoms[i]!=fir2)
                    res++;
                else if(bottoms[i]!=fir2 && tops[i]!=fir2)
                    return -1;
            }
        }
        
        return res;
    }
};