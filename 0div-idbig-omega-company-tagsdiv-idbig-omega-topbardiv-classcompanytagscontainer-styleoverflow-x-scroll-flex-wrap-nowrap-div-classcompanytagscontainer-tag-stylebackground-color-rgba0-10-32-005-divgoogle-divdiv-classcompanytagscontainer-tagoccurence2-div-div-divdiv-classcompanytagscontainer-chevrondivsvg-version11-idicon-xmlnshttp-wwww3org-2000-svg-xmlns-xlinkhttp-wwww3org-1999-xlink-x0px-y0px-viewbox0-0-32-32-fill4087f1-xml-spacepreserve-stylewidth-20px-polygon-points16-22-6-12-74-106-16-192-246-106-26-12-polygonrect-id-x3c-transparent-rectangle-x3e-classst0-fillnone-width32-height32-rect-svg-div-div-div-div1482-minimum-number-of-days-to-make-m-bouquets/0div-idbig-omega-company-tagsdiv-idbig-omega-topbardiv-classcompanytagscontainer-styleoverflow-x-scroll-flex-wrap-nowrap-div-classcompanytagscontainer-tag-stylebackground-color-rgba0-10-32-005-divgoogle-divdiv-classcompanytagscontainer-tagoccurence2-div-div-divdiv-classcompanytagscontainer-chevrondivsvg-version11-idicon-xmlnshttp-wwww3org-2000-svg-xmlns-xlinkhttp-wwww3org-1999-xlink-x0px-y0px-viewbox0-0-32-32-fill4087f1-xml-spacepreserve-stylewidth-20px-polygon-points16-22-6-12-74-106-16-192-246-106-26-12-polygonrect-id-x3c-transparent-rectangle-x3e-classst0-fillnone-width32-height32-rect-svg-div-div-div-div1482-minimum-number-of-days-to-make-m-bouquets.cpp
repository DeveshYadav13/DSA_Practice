class Solution {
public:  
    bool solve(int days, vector<int>&arr, int k, int m){
        long long bouquets = 0;
        long long i = 0;
        while(i<arr.size()){
            long long curr = 0;
            while(i<arr.size() && days>=arr[i]){
                curr++;
                if(curr==k){bouquets++; break;}
                i++;
            }
            i++;
            if(i>=arr.size() || bouquets>=m){break;}
        }
        return bouquets>=m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long l = 1, r = *max_element(bloomDay.begin(),bloomDay.end());
        long long minDays = LLONG_MAX;
        while(l<=r){
            long long mid = l + (r-l)/2;
            //cout<<mid<<" "<<solve(mid,arr,k,m)<<"\n";

            if(solve(mid,bloomDay,k,m)){
                minDays = min(minDays,mid);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return minDays;
    }
};