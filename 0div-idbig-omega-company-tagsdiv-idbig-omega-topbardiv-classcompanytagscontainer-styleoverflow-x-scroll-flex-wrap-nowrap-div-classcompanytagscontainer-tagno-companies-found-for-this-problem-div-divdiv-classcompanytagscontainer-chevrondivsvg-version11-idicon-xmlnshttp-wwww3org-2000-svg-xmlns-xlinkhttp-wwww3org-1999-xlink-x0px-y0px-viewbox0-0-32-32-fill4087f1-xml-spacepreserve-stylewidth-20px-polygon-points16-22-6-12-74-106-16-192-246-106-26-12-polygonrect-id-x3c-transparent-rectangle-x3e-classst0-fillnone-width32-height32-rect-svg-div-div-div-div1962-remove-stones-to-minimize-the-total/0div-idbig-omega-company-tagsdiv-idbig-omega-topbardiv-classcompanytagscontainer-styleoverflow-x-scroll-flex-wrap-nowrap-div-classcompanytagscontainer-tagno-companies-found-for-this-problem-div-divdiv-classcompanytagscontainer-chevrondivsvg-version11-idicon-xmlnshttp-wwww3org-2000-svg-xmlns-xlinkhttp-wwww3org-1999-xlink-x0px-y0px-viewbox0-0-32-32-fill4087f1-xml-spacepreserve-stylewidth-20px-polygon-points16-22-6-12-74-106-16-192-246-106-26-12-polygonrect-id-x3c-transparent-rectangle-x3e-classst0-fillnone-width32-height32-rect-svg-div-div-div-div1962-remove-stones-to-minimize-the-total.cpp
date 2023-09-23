class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto i : piles){
            pq.push(i);
        }
        
        while(k--){
            int top = pq.top();
            pq.pop();
            if(top%2==0){
                top = top/2;
            }
            else{
                top = top/2+1;
            }
            //cout<<top<<"\n";
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