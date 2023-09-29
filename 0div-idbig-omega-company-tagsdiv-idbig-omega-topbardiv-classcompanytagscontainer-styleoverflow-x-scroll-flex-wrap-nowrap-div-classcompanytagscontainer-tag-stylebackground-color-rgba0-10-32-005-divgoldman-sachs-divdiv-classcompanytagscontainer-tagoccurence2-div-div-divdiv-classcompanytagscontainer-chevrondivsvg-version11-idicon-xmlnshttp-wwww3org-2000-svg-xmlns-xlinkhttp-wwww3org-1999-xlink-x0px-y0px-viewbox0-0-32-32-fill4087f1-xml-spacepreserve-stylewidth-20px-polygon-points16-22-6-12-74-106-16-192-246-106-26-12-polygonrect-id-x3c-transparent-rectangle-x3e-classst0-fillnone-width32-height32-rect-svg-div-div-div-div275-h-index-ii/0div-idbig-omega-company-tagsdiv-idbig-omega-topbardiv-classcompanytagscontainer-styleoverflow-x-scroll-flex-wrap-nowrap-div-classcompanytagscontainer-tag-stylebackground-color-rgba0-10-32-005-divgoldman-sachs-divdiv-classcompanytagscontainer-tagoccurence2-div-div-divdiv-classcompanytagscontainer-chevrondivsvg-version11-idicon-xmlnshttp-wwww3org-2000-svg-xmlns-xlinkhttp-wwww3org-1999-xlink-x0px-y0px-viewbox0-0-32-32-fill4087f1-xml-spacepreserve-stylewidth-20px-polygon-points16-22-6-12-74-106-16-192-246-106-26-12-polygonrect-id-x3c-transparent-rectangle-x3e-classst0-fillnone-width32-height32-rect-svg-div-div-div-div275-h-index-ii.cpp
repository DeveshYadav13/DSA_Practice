class Solution {
public:

    bool isValid(int h, vector<int>&arr){
        int cnt = 0;
        for(auto i : arr){
            if(i>=h){
                cnt++;
            }
        }
        return cnt>=h;
    }
    
    int hIndex(vector<int>& citations) {
        int maxi = *max_element(citations.begin(),citations.end());
        
        int l = 0, r = maxi;
        while(l<=r){
            int m = l + (r-l)/2;
            
            if(isValid(m,citations)){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        
        return l-1;
    }
};