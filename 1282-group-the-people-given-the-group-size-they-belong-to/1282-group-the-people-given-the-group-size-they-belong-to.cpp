class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>> ans;

        unordered_map<int, vector<int>> m;  // mapping size with elements

        for (int i = 0; i < n; i++) {
            int size = groupSizes[i];

            m[size].push_back(i);

            if (m[size].size() == size) {   // handling different groups
                ans.push_back(m[size]);
                m[size].clear();
            }
        }

        return ans;
    }
};