class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        if(n==1){return arr[0];}
        int target = n/4 + 1;
        
        int i = 0;
        while(i<n-1){
            int cnt = 1;
            bool f = false;
            while(i<n-1 && arr[i]==arr[i+1]){
                i++;
                f = true;
                cnt++;
            }
            if(cnt>=target){
                return arr[i-1];
            }
            if(f)continue;
            i++;
        }
        
        return -1;
    }
};