class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int mini = INT_MAX, secmin = INT_MAX;
        
        for(auto i : prices){
            if(i<=mini){
                secmin = mini;
                mini = i;
            }
            else if(i<secmin){
                secmin = i;
            }
        }
        
        if(secmin+mini>money){return money;}
        return money-(secmin+mini);
    }
};