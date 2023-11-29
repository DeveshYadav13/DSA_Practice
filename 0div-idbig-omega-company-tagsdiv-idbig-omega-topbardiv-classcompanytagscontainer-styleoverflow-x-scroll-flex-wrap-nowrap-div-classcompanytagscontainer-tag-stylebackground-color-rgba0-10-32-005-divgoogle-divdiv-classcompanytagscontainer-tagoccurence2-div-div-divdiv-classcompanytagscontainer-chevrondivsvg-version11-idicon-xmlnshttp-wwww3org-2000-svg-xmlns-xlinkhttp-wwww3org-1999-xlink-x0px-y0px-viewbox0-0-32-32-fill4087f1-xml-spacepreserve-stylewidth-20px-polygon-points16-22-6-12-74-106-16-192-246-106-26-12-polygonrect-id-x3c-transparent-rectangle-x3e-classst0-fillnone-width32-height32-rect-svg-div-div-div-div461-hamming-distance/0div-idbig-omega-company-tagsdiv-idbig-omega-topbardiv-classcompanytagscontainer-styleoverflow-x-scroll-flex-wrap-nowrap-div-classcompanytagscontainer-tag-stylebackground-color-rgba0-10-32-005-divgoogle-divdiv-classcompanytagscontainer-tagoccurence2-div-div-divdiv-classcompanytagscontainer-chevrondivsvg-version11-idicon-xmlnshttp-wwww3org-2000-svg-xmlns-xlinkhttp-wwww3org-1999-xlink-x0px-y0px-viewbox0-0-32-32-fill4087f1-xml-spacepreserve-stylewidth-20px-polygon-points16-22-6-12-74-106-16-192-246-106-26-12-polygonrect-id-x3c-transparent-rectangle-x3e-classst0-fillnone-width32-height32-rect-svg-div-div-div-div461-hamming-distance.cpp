class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while (x||y) {
            int d1 = x%2, d2 = y%2;
            cnt += (d1^d2);
            x >>= 1;
            y >>= 1;
        }
        return cnt;
    }
};