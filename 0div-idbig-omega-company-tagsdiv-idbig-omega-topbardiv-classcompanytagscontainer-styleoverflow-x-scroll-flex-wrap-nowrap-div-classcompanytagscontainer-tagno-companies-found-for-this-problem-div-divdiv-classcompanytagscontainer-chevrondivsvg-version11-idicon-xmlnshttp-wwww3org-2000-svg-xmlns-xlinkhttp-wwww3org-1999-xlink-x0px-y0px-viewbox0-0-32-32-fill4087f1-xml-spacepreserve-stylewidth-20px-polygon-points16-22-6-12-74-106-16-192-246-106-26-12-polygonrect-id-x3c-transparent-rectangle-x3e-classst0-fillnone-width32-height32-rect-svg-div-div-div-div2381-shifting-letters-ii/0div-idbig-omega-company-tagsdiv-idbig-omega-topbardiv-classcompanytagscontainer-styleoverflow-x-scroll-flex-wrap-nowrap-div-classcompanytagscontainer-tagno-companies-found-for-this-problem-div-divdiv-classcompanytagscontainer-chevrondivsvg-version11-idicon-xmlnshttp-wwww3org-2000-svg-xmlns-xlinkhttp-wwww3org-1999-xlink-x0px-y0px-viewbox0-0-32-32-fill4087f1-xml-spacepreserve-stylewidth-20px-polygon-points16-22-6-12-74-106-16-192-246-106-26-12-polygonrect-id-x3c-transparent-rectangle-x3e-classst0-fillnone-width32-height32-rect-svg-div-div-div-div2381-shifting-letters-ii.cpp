class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<long long> v(n + 1, 0);

        for (auto &x : shifts) {
            if (x[2] == 1) {
                v[x[0]]++;
                v[x[1] + 1]--;
            } else {
                v[x[0]]--;
                v[x[1] + 1]++;
            }
        }

        for (int i = 1; i <= n; i++) {
            v[i] += v[i - 1];
        }

        string ans;
        for (int i = 0; i < n; i++) {
            int a = s[i] - 'a';
            int shifted = (a + v[i]) % 26;
            if (shifted < 0) {
                shifted += 26;
            }
            ans.push_back('a' + shifted);
        }

        return ans;
    }
};