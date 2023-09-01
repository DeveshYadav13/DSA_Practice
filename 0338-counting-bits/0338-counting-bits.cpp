class Solution {
public:
     int countSetBits(unsigned int n)
    {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0;i<=n;i++){
            ans.push_back(countSetBits(i));
        }
        return ans;
    }
};