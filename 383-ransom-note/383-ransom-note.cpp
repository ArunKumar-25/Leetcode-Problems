class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        if(m<n)
            return false;
        for(int i=0;i<n;i++)
        {
            if(magazine.find(ransomNote[i])==string::npos)
            {
                return false;
            }
            magazine[magazine.find(ransomNote[i])]='-1';
                
        }
        return true;
    }
};