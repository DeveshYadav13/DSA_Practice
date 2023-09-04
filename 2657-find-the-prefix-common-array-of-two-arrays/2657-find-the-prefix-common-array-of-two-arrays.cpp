class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,bool>mpa,mpb;
        
        vector<int>ans;
        for(int i = 0; i<A.size(); i++){
            mpa[A[i]] = 1;
            mpb[B[i]] = 1;
            
            int cnt = 0;
            for(auto it : mpa){
                if(it.second && mpb[it.first]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        
        return ans;
    }
};