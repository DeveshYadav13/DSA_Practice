class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0;
        long long s2 = 0;
        bool f1 = false, f2 = false;
    
        for(auto i : nums1){
            if(i==0){f1 = true; s1++;}
            else{s1+=i;}
        }
        
        for(auto i : nums2){
            if(i==0){f2 = true; s2++;}
            else{s2+=i;}
        }
        
        if((s1>s2 && !f2) || (s2>s1 && !f1)){return -1;} 
        return max(s1,s2);
    }
};