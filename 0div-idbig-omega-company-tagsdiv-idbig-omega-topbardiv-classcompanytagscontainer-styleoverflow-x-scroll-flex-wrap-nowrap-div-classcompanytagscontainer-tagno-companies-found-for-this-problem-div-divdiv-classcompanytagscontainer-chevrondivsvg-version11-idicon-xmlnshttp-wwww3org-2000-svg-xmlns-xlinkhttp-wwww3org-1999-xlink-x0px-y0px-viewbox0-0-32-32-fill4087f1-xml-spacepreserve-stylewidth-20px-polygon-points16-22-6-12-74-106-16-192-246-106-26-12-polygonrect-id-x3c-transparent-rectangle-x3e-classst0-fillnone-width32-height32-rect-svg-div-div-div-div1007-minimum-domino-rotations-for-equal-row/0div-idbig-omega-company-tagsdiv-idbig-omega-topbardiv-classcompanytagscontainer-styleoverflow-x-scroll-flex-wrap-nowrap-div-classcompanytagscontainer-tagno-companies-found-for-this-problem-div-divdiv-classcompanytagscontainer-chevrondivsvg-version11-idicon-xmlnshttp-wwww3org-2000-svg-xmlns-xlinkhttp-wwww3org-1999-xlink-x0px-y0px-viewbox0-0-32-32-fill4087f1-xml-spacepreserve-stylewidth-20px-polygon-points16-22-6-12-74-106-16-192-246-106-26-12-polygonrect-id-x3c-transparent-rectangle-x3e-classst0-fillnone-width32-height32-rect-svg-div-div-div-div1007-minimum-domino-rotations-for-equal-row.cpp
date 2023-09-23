class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        //1.) Find the integer which has a frequency of n or more in both the arrays combined.
        map<int, int> mpp;
        for(int i=0; i<tops.size(); i++){
            if(tops[i]==bottoms[i]) mpp[tops[i]]++;
            else{
                mpp[tops[i]]++;
                mpp[bottoms[i]]++;
            }
        }
        int el;
        bool flag = false;
        for(auto it: mpp){
            if(it.second==tops.size()){
                el = it.first;
                flag = true;
                break;
            } 
        }
        
        // not possible to make 
        if(!flag) return -1;
        int ans1 = 0, ans2 = 0;
        
        // flip all to the top.
        for(int i=0; i<tops.size(); i++){
            if(tops[i]!=el) ans1++;
        }

        // flip all to the bottom.
        for(int i=0; i<tops.size(); i++){
            if(bottoms[i]!=el) ans2++;
        }

        return min(ans1, ans2);
    }
};