class Solution {
public:
  
    bool closeStrings(string word1, string word2) {
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        unordered_set <char> st1,st2;
        for(auto i : word1){
            mp1[i]++;
            st1.insert(i);
        }
        for(auto i : word2){
            mp2[i]++;
            st2.insert(i);
        }
        if(mp1.size()!=mp2.size()){
            return false;
        }
        if(st1!=st2){
            return false;
        }
        vector <int> vc1;
        vector <int> vc2;
        for(auto i : mp1){
            vc1.push_back(i.second);
        }
        for(auto i : mp2){
            vc2.push_back(i.second);
        }
        sort(vc1.begin(),vc1.end());
        sort(vc2.begin(),vc2.end());
        for(int i = 0;i<vc1.size();i++){
            if(vc1[i]!=vc2[i]){
                return false;
            }
        }
        return true;
    }
};