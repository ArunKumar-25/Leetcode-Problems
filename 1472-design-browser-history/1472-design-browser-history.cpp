class BrowserHistory {
public:
  list<string>hist;
  list<string>:: iterator i;
    BrowserHistory(string homepage) {
        hist.push_back(homepage);
        i=hist.begin();
 }
 void visit(string url) {
        auto d=i;
        d++;
        hist.erase(d,hist.end());
        hist.push_back(url);
        i++;     
    }
  string back(int steps) {
        while(i!=hist.begin() && steps--)
        i--;
   return *i;
     }
 string forward(int steps) {
        while(i!=(--hist.end())&& steps--)
        i++;
  return *i;
  }
};