class Solution {
public:
   int largestInteger(int num) {
        string p= to_string(num) , odd="", even="";
        for(int i=0;i<p.size();i++){
            if((p[i]-'0')%2==0) even+= p[i];   else odd+= p[i]; 
        }
        sort(rbegin(odd),rend(odd));
        sort(rbegin(even),rend(even));
        for(int i=0,j=0,k=0;i<p.size();i++)  p[i]=  (p[i]-'0')%2==0? even[j++] : odd[k++];
    return stoi(p);
}
};