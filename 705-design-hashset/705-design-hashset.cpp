
class MyHashSet {
    vector<bool>res;
    const int n= 1e6+5;
public:
    MyHashSet() {
        for(int i = 0 ; i < n ; i++) res.push_back(false);
    }
    
    void add(int key) {
        res[key]=true;
    }
    
    void remove(int key) {
        res[key]=false;
    }
    
    bool contains(int key) {
        return res[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */