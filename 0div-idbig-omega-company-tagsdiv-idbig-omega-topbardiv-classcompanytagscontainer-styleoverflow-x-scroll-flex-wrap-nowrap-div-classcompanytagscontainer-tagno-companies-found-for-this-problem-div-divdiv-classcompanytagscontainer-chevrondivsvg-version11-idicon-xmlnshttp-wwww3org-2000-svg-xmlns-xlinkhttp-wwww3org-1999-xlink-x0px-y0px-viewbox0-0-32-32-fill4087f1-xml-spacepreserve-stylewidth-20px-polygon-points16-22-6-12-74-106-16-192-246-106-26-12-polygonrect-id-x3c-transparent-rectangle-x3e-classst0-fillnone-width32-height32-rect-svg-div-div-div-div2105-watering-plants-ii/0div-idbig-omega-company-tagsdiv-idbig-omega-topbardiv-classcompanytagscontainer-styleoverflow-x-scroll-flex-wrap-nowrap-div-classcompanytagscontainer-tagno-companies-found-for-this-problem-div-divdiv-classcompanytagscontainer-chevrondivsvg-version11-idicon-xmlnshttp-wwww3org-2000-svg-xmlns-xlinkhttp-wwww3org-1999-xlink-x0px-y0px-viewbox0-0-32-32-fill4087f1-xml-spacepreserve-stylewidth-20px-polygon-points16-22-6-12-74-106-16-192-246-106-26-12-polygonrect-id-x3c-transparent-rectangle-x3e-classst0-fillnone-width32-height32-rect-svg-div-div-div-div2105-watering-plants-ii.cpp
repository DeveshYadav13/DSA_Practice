class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int cnt = 0;
        int n = plants.size();
        int l = 0, r = n-1;
        int currA = capacityA, currB = capacityB;
        
        while(l<r){
            if(currA<plants[l]){
                cnt++;
                currA = capacityA;
            }
            currA-=plants[l++];
            
            if(currB<plants[r]){
                cnt++;
                currB = capacityB;
            }
            currB-=plants[r--];
        }
        
        if(l==r){
            if(max(currA,currB)<plants[l]){cnt++;}
        }
        
        return cnt;
    }
};