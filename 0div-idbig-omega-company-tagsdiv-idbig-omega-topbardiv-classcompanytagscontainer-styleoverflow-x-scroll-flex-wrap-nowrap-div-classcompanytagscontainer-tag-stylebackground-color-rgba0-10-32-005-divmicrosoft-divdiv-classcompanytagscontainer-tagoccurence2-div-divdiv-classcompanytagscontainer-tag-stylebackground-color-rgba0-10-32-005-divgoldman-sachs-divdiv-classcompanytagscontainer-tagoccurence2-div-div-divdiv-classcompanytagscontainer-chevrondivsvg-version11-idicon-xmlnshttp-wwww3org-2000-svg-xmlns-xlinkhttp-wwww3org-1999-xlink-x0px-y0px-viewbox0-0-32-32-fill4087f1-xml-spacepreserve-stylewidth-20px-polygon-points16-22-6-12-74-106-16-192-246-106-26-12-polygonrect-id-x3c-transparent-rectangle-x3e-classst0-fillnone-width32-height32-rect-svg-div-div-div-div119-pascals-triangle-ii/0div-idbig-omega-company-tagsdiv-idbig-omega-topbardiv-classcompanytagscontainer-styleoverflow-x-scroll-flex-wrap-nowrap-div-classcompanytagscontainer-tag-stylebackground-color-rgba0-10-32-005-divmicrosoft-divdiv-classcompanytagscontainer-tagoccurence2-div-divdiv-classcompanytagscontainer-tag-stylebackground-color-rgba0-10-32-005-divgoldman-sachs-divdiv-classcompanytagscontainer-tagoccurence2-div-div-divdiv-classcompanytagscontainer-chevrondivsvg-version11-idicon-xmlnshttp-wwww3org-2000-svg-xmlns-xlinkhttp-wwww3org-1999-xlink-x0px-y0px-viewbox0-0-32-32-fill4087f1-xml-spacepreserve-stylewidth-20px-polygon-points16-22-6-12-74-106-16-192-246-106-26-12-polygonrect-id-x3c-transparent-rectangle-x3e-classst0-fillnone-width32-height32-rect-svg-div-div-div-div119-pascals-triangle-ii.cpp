class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>curr;
        vector<int>prev;
        prev.push_back(1);
        if(rowIndex==0){return prev;}
        prev.push_back(1);
        if(rowIndex==1){return prev;}
        
        
        for(int i = 2; i<=rowIndex; i++){
            int j = 0;
            curr.push_back(1);
            while(j<prev.size()-1){
                curr.push_back(prev[j]+prev[j+1]);
                j++;
            }
            curr.push_back(1);
            prev = curr;
            curr.clear();
        }
        
        return prev;
    }
};