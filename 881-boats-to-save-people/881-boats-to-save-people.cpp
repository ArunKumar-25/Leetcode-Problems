class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1,res=0;
        while(i<=j)
        {
            if(people[i]+people[j]>limit)
            {
                j--;
            }
            else
            {
                i++;
                j--;
            }
            res++;
        }
        return res;
    }
};