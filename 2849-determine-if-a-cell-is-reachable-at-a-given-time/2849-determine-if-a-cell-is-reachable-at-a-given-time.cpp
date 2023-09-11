class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy){
            if(t==1)return false;
            else return true;
        }
        
        int mini = min(abs(fx-sx),abs(fy-sy));
        int minSteps = mini + abs(fx-sx)-mini + abs(fy-sy)-mini;
        int maxSteps = abs(abs(fx-sx) + abs(fy-sy));
        // cout<<minSteps<<" "<<maxSteps<<'\n';
        
        if(t<minSteps)return false;
        
        return true;
    }
};