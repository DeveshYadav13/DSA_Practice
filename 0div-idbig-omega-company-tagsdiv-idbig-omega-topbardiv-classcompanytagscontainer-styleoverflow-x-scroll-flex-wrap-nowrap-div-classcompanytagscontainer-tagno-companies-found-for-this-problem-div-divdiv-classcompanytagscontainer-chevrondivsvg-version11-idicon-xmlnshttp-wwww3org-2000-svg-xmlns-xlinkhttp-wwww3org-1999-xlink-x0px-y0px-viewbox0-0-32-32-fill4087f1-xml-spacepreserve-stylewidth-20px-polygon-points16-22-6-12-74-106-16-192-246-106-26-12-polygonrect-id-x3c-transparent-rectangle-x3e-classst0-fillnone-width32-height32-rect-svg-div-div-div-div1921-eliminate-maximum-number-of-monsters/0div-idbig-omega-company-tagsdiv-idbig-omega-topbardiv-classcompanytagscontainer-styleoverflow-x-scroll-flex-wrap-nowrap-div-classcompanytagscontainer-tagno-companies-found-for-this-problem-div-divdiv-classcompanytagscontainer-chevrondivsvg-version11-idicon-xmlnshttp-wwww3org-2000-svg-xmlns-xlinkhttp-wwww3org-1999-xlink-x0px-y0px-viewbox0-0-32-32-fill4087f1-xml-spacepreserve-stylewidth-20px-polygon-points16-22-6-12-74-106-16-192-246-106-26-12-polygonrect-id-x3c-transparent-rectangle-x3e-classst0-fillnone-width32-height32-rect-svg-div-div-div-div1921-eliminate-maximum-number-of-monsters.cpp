class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<int>time;
        for(int i =0; i<dist.size(); i++){
            int t = dist[i]/speed[i] + (dist[i]%speed[i]!=0);
            time.push_back(t);
        }
        
        sort(time.begin(),time.end());
        
        int init = 0;
        for(auto i : time){
            if(init>=i){
                return init;
            }
            init++;
        }
        return init;
    }
};