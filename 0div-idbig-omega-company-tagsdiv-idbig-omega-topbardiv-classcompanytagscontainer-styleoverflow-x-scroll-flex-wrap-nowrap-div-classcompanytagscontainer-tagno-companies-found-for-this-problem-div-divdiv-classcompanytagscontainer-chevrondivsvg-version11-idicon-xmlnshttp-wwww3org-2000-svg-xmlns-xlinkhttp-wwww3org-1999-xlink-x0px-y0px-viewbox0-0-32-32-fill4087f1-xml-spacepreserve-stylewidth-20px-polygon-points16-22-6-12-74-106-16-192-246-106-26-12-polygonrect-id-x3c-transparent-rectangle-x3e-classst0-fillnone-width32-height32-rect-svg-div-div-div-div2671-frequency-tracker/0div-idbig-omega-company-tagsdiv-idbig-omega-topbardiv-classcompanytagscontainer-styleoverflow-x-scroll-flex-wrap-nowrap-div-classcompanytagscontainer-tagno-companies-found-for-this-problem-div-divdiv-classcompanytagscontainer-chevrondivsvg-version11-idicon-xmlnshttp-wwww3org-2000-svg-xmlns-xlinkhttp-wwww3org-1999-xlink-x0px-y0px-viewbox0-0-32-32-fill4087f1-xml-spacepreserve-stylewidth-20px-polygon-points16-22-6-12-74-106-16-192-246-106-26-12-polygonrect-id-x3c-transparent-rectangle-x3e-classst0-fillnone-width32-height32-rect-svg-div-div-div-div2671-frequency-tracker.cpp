class FrequencyTracker {
public:
    unordered_map<int,int>mp;
    unordered_map<int,int>freq;
    
    FrequencyTracker() {
    }
    
    void add(int number) {
        freq[mp[number]]--;
        mp[number]++;
        freq[mp[number]]++;
        
    }
    
    void deleteOne(int number) {
        if(mp[number]==0){return;}
        freq[mp[number]]--;
        mp[number]--;
        freq[mp[number]]++;
    }
    
    bool hasFrequency(int frequency) {
        return freq[frequency]>0;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */