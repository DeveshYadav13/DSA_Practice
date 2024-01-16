class RandomizedSet {
public:
    map<int,bool>mp;
    vector<int>vc;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp[val]){return false;}
        mp[val] = 1;
        vc.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(mp[val]){mp[val] = 0; return true;}
        return false;
    }
    
    int getRandom() {
        while(1){
            int randIdx = rand() % vc.size();
            if(mp[vc[randIdx]]){
                return vc[randIdx];
            }
        }
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */