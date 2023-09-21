class Solution {
public:
    
    // josephus problem
    
    int findTheWinner(int n, int k) {
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k) % i;
        }
        return ans + 1;   // +1  bcs of 1-based indexing
    }
};