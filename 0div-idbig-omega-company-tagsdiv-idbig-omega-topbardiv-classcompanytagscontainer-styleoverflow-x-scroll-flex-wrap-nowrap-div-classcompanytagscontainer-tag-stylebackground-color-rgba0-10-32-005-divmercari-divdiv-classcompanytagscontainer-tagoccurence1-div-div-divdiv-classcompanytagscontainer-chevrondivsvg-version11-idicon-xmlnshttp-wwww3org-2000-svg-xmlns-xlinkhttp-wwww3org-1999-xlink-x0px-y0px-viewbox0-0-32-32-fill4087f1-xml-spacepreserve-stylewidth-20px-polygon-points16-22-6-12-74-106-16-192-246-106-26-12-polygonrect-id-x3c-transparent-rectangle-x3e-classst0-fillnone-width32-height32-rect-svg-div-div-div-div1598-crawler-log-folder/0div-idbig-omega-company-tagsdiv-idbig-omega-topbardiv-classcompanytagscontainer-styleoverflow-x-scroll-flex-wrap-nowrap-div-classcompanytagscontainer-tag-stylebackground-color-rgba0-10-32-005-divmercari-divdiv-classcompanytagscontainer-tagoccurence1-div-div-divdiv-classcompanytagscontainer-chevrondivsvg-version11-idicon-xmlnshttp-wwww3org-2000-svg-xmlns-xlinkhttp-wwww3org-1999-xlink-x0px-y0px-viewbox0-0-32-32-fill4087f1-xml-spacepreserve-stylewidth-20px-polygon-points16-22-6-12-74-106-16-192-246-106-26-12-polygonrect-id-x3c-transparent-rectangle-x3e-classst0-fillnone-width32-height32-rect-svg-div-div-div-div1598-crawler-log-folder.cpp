class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(auto i : logs){
            if(i[0]=='.'){
                if(i[1]=='.'){
                    if(cnt>=1)cnt--;
                }
            }
            else{
                cnt++;
            }
        }
        return cnt;
    }
};