class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        
        for(auto i : tokens){
            if(i=="+" || i=="-" || i=="*" || i=="/"){
                int f = st.top();
                st.pop();
                int s = st.top();
                st.pop();
                
                int nval;
                if(i=="+"){
                    nval = s+f;
                }
                else if(i=="-"){
                    nval = s-f;
                }
                else if(i=="*"){
                    nval = s*f;
                }
                else if(i=="/"){
                    nval = s/f;
                }
                st.push(nval);
            }
            else{
                int nval = stoi(i);
                st.push(nval);
            }
        }
        
        return st.top();
    }
};