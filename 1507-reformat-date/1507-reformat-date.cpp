class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string, string> mp {
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
            {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
            {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };
        vector<string>v;
        stringstream ss(date);
        string word;
        while(ss>>word)
            v.push_back(word);
        string day,month,year;
        int i=0;
        while(v[0][i]>='0' && v[0][i]<='9')
        {
            day+=v[0][i];
            i++;
        }
        if(day.size()==1)
            day="0"+day;
        
        month=mp[v[1]];
        year=v[2];
        string res=year+"-"+month+"-"+day;
        return res;
    }
};