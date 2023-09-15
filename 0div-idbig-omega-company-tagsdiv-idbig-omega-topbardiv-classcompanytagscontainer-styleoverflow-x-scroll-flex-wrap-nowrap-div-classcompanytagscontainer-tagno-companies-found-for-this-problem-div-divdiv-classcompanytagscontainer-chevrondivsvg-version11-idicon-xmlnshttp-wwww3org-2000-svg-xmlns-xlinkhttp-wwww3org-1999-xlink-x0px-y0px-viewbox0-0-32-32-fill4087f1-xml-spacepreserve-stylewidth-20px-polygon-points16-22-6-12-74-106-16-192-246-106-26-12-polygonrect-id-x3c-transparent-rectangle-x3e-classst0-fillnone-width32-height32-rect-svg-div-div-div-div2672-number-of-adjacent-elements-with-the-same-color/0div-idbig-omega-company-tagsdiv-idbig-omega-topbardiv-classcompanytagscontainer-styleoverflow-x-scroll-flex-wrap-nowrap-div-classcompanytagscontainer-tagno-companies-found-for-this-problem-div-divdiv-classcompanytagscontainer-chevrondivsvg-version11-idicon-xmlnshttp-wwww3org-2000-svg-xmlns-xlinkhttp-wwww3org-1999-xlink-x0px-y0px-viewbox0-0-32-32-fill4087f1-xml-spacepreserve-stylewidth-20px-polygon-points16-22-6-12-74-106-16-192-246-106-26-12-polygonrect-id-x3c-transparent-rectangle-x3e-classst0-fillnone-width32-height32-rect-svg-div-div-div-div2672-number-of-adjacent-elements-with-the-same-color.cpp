class Solution {
public:
    
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int>colors(n+1,0);
        vector<int>ans;
        int cnt = 0;
        
        for(auto i : queries){
            int idx = i[0];
            int oldT = 0, newT = 0;
            if(idx!=0){
                if(colors[idx-1]==colors[idx] && colors[idx]!=0){oldT++;}
            }            
            if(colors[idx+1]==colors[idx] && colors[idx]!=0){
                oldT++;
            }
            
            colors[idx] = i[1];
            
            if(idx!=0){
                if(colors[idx-1]==colors[idx] && colors[idx]!=0){newT++;}
            }            
            if(colors[idx+1]==colors[idx] && colors[idx]!=0){
                newT++;
            }
            
            cnt+=newT - oldT;
            ans.push_back(cnt);
        }
        
        return ans;
    }
};