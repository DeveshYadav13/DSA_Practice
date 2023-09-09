class Solution {
public:
    string minimizeResult(string s) {
        // changing the string name from expression to s... 
        // pls leetcode don't give huge variable names
        
        int plusidx = -1;
        int n = s.length();
        for(int i = 0; i<n; i++){
            if(s[i]=='+'){
                plusidx = i;
                break;
            }
        }
        
        // Let the template of the string parenthesization be
        // a(b+c)d
        
        int ans = INT_MAX;
        string res = "";
        string a,b,c,d,mid;
        int anum,bnum,cnum,dnum;
        
        plusidx++;
        
        for(int i=0;i<plusidx-1;i++){
            for(int j=plusidx;j<n;j++){         
                a = s.substr(0,i);
                mid = s.substr(i,j+1-i);
                d = s.substr(j+1,n);
                
                // Printing all combinatoins
                // cout<<a + "(" + mid + ")" + d<<"\n";
                
                if(a.size()==0) anum = 1;
                else anum = stoi(a);
                
                if(d.size()==0) dnum = 1;
                else dnum = stoi(d);
                
                int k = 0;
                b.clear();
                c.clear();  
                while(mid[k]!='+'){
                    b.push_back(mid[k++]); 
                }
                k++;
                while(k<mid.length()){
                    c.push_back(mid[k++]);
                }
                
                bnum = stoi(b);
                cnum = stoi(c);
                
                int val = anum*(bnum+cnum)*dnum;
                if(val<ans){
                    ans = val;
                    res = a + "(" + mid + ")" + d;
                }
                
            }
        }
        
        return res;
        
    }
};