class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        for(int i = 2; i<num.size(); i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                string temp;
                temp.push_back(num[i-2]);
                temp.push_back(num[i-1]);
                temp.push_back(num[i]);
                ans = max(ans,temp);
            }
        }
        return ans;
    }
};