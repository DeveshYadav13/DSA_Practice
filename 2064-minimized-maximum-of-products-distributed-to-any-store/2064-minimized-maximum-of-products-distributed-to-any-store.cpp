class Solution {
public:

    int minimizedMaximum(int n, vector<int>& quantities) {
        int m=quantities.size(), l=1,r=0;
        for(auto quantity: quantities) r=max(r,quantity);
        
        int mid=0, ans=0;
        while(l<=r){
            mid=(l+r)/2;
            int count=0;
            for(auto quantity: quantities){
                count+=quantity/mid;
                if(quantity%mid) count++;
            }
            if(count<=n) ans=mid,r=mid-1;
            else l=mid+1;
        }
        return ans;
    }
};