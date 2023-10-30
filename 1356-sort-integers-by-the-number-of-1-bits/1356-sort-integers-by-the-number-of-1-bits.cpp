class Solution {
public:
    static int countSetBits(int n)
    {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    
    static bool cmp(int a, int b){
        if(countSetBits(a)==countSetBits(b)){
            return a<b;
        }
        
        return countSetBits(a) < countSetBits(b);
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};