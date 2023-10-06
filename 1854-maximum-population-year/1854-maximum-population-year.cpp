class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int maxcnt = 0;
        int maxyear = -1;
        for(int i = 1950; i<=2049; i++){
            int cnt = 0;
            for(auto log : logs){
                int birth = log[0];
                int death = log[1];
                
                if(i>=birth && i<death){cnt++;}
            }
            if(cnt>maxcnt){
                maxcnt = cnt;
                maxyear = i;
            }
        }
        return maxyear;
    }
};