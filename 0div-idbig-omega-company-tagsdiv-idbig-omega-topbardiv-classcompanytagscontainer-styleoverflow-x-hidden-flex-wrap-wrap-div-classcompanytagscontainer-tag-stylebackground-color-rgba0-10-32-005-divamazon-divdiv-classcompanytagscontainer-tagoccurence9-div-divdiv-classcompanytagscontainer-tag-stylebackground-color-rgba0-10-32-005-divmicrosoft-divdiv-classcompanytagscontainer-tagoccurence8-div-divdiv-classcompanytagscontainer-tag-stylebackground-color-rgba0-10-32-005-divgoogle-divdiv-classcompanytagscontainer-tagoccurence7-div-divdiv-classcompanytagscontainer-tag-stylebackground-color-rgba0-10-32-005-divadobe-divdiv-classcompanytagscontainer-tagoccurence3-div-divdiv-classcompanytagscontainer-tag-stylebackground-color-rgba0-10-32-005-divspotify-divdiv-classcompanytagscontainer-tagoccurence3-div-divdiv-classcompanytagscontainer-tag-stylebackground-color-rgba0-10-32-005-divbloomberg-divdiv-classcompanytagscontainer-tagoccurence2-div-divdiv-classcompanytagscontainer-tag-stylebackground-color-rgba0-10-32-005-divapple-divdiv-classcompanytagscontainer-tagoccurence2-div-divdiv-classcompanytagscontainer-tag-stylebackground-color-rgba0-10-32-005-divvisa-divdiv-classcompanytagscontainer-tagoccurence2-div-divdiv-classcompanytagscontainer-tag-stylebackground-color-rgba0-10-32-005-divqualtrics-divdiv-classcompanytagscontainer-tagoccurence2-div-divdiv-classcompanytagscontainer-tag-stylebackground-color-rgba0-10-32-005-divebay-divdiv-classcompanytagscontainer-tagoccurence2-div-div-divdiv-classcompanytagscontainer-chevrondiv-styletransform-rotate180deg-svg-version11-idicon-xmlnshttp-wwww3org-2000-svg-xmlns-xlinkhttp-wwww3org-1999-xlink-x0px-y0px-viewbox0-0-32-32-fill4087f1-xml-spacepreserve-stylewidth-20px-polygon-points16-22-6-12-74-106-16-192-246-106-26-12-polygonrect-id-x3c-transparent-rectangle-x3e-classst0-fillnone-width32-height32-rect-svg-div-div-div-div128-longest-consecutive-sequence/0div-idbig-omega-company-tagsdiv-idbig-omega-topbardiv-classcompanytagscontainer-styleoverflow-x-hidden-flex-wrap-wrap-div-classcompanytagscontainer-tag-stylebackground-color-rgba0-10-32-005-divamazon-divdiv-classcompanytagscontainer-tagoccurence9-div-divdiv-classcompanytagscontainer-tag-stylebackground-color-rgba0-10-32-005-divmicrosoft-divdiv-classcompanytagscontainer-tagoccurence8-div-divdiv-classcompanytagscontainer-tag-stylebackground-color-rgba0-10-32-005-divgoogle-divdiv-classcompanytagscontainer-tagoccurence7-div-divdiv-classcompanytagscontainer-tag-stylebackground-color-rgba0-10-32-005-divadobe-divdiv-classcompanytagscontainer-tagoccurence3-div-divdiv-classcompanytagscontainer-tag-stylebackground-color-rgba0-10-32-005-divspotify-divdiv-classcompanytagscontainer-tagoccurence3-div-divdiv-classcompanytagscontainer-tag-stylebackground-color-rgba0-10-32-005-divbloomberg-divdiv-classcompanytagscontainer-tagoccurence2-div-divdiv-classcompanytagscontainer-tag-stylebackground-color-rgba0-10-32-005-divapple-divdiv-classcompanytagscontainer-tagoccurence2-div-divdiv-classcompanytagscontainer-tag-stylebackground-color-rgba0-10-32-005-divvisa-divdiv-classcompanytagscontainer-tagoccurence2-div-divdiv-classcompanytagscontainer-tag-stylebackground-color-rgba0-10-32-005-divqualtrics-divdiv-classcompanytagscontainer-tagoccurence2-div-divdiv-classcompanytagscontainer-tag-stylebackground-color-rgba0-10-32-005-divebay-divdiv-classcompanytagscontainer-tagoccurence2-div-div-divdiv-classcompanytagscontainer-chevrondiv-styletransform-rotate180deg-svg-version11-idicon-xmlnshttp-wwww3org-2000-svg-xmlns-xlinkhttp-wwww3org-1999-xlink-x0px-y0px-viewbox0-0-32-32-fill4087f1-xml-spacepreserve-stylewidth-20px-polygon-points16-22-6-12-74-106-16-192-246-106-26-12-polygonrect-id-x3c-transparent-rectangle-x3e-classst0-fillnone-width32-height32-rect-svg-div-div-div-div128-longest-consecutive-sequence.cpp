class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i : nums){
            st.insert(i);
        }
        
        int mxlen = 0;
        for(auto x : st){
            int curr = 1;
            // x is a starting number of sequence
            if(st.find(x-1)==st.end()){
                while(st.find(x+1)!=st.end()){
                    curr++;
                    x++;
                }
            }
            
            mxlen = max(mxlen,curr);
        }
        
        return mxlen;
    }
};