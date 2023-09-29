class Solution {
public:

    bool isValid(int h, vector<int>&arr){
        vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), h);
        int lb = (it-arr.begin());
        //cout<<h<<" "<<lb<<"\n"; 
        
        int val = arr.size()-lb;
        return val>=h;
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