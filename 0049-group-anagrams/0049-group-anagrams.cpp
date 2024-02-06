class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>m;
        
        for(auto i : strs){
            map<char,int>mp;
            for(auto j : i){
                mp[j]++;
            }
            m[mp].push_back(i);
        }
        
        vector<vector<string>>ans;
        for(auto i : m){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};