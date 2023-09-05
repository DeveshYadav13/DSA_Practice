class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        ans.push_back({intervals[0][0],intervals[0][1]});
        vector<int> temp;
        
        for(int i = 1; i<intervals.size(); i++){
            temp = ans.back();
            int x = temp[1];
            int y = intervals[i][0];
            if(x<y){
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
            else{
                ans.pop_back();
                ans.push_back({temp[0],max(intervals[i][1],temp[1])});
            }
        }
        
        return ans;
    }
};