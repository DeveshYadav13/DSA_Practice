class Solution {
public:
    
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i : nums){
            pq.push(i);
        }
        
        while(k--){
            int top = pq.top();
            pq.pop();
            top = -1*top;
            pq.push(top);
        }
        
        int s = 0;
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
    }
};