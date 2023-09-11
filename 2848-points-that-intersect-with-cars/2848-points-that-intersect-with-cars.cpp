class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int cnt = 0;
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        
        for (vector<int>& car : nums) {
          if (car[0] > maxi)
            cnt += car[1] - car[0] + 1;
            
          else if (car[1] > maxi)
            cnt += car[1] - maxi;

          maxi = max(maxi, car[1]);
        }

        return cnt;
    }
};