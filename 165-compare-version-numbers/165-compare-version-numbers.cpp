class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1,v2;
        version1.push_back('.');
        version2.push_back('.');
        int i=0,temp=0;
        while(i<version1.size())
        {
            if(version1[i]=='.')
            {
                v1.push_back(temp);
                temp=0;
            }
            else
            {
                temp=temp*10+(version1[i]-'0');
            }
            i++;
        }
        i=0,temp=0;
        while(i<version2.size())
        {
            if(version2[i]=='.')
            {
                v2.push_back(temp);
                temp=0;
            }
            else
            {
                temp=temp*10+(version2[i]-'0');
            }
            i++;
        }

        if(v1.size()!=v2.size())
        {
            if(v1.size()<v2.size())
            {
                int x=v2.size()-v1.size();
                while(x--)
                    v1.push_back(0);
            }
            else
            {
                int x=v1.size()-v2.size();
                while(x--)
                    v2.push_back(0);
            }
        }
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]<v2[i])
                return -1;
            if(v1[i]>v2[i])
                return 1;
        }
        return 0;
    }
    
};