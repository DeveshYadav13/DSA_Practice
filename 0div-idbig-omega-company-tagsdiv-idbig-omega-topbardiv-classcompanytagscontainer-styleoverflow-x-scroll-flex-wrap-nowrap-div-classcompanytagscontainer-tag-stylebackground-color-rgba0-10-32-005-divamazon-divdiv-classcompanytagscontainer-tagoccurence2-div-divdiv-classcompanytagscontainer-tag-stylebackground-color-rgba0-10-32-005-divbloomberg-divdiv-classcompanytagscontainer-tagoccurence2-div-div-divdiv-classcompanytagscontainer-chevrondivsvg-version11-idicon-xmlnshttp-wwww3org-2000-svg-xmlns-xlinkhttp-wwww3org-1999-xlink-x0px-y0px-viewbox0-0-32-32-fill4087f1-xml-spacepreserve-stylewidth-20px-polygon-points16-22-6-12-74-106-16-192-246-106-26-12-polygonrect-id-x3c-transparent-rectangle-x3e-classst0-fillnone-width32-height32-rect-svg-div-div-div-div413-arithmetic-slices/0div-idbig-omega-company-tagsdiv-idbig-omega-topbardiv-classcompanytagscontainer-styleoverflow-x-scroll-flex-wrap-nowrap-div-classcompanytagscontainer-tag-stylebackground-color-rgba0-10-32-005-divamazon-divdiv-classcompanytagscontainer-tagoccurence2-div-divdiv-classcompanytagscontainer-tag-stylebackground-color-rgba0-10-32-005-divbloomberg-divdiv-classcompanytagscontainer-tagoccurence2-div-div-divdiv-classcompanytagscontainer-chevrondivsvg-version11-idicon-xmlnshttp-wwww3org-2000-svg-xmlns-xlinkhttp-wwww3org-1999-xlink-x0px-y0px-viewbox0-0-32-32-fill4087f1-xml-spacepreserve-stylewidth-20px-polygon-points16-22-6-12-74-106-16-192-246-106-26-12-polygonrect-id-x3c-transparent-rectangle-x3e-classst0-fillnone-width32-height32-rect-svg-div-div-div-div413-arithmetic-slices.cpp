class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
//         -> store length of such slices (length>=3) Sliding window
//         -> for each length, we can get x slices overall.
//         n = 3 -> x = 1
//         n = 4 -> x = 3
//         n = 5 -> x = 6

//         1 2 3 4 5 6

//         size 3 = 4
//         size 4 = 3
//         size 5 = 2
//         size 6 = 1
// 	    basically x = 1+2+3+...+(n-2)
// 	    x = ((n-2)(n-1))/2

        int n = nums.size();
        if(n<=2){return 0;}
        
        vector<int>slices;
        
        int l = 0, r = 1;
        int diff = nums[r]-nums[l];
        
        while(r<n-1){
            if(nums[r+1]-nums[r]==diff){
                r++;
                int len = r-l+1;
                if(r==n-1 && len>=3){
                    slices.push_back(len);
                }
            }
            else{
                int len = r-l+1;
                if(len>=3){
                    slices.push_back(len);
                }
                l = r;
                r++;
                diff = nums[r]-nums[l];
            }
        }
        
        long long ans = 0;
        for(auto i : slices){
            long long x = ((i-1)*(i-2))/2;
            ans+=x;
        }
        
        return (int)ans;
    }
};