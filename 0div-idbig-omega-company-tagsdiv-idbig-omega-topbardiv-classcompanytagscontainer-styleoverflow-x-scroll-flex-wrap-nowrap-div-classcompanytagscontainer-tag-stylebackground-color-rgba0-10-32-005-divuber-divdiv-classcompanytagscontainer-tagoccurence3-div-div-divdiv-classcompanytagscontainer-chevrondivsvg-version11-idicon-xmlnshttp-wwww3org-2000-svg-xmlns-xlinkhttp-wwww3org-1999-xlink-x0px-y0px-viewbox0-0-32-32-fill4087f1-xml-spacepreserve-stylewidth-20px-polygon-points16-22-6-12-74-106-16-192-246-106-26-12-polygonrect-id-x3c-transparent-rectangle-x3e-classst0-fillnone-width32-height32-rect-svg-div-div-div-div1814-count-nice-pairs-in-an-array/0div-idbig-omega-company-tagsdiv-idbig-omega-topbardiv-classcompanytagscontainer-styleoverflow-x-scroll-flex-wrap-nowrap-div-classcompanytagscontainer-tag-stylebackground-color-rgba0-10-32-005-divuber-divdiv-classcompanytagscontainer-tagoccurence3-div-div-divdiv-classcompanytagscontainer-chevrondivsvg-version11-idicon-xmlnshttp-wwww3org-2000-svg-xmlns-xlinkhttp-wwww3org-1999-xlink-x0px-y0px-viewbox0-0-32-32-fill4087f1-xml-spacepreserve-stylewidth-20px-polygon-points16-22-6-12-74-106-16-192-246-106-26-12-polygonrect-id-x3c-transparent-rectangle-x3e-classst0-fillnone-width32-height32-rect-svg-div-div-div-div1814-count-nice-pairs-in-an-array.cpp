class Solution {
public:
    const int mod = 1e9+7;
    
    int reverseDigits(int num) 
    { 
        int rev_num = 0; 
        while (num > 0) { 
            rev_num = rev_num * 10 + num % 10; 
            num = num / 10; 
        } 
        return rev_num; 
    } 
    
    int countNicePairs(vector<int>& nums) {
        // nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
        // => nums[i] - rev(nums[i]) == nums[j] - rev(nums[j])
        
        // In short, numbers with same value of num - rev(num) can be used to 
        // form a nice pair -> use map
        
        // to store pairs of {val,cnt} where val = num-rev(num)
        unordered_map<int,long>mp;
        
        for(auto i : nums){
            int val = i - reverseDigits(i);
            mp[val]++;
        }
        
        // for cnt = n  we can have (n*(n-1))/2 pairs for a given val in map
        long ans = 0;
        for(auto it : mp){
            long cnt = it.second;
            ans+=((cnt*(cnt-1))/2)%mod;
        }

        return (int)ans%mod;
    }
          
};