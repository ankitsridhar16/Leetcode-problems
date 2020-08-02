
class MyHashSet {
public:
    /** Initialize your data structure here. */
    set<int> hash_set;
    MyHashSet() {
        hash_set.clear();
    }
    
    void add(int key) {
        hash_set.insert(key);
    }
    
    void remove(int key) {
        for(auto it : hash_set)
            if (it==key)
                hash_set.erase(it);
    }
    
    bool contains(int key) {
        return hash_set.find(key)!=hash_set.end();
            
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */