class Solution {
public:
    int maxGap(vector<int>&arr, int x){
        vector<int>indexes;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i]==x){
                indexes.push_back(i);
            }
        }
        //sort(indexes.begin(),indexes.end());
        if(indexes.size()==1){return -1;}
        
        int maxi = INT_MIN;
        for(int i = 0; i<indexes.size()-1; i++){
            int gap = indexes[i+1]-indexes[i]-1;
            maxi = max(maxi,gap);
        }
        maxi = max(maxi,(int)(arr.size()-1-indexes[indexes.size()-1]+indexes[0]));
        return maxi;
    }
    
    int minimumSeconds(vector<int>& nums) {
        
//         int maxi = INT_MAX;
//         for(auto i : nums){
//             cout<<i<<" "<<maxGap(nums,i)<<"\n";
//             int val = maxGap(nums,i);
//             if(val!=-1){maxi = min(maxi,val);}
//         }
        
//         if(maxi==INT_MAX){return nums.size()/2;}
//         return maxi/2 + maxi%2;
        
        unordered_map<int, vector<int>> n_pos;
        for (int i = 0; i < nums.size(); ++i)
            n_pos[nums[i]].push_back(i);
        int res = INT_MAX;
        for (auto &[n, pos] : n_pos) {
            pos.push_back(pos[0] + nums.size());
            int seconds = 0;
            for (int i = 1; i < pos.size(); ++i)
                seconds = max(seconds, (pos[i] - pos[i - 1]) / 2);
            res = min(res, seconds);
        }
        return res;
    }
};