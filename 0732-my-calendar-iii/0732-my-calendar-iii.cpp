class MyCalendarThree {
public:
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    int maxcnt=0;
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int sum=0;
        for(auto x:mp)
        {
            sum+=x.second;
            if(sum>maxcnt)
                maxcnt=sum;
        }
        return maxcnt;
            
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */