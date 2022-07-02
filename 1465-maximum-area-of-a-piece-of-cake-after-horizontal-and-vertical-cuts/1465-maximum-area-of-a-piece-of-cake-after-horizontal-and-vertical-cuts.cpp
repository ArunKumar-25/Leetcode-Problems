class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long length=INT_MIN,width=INT_MIN;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            int x=horizontalCuts[i]-horizontalCuts[i-1];
            if(x>length)
                length=x;
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            int x=verticalCuts[i]-verticalCuts[i-1];
            if(x>width)
                width=x;
        }
        return (length*width)%(1000000007);
    }
};