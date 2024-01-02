class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        int r = 0;
        for (auto i : s) {
            if (i == '(') {
                if (r % 2 > 0) {
                    r--;
                    ans++;
                }
                r += 2;
            }
            else {
                r--;
                if (r < 0) {
                    r += 2;
                    ans++;
                }
            }
        }
        ans+=r;
        return ans;
    }
};