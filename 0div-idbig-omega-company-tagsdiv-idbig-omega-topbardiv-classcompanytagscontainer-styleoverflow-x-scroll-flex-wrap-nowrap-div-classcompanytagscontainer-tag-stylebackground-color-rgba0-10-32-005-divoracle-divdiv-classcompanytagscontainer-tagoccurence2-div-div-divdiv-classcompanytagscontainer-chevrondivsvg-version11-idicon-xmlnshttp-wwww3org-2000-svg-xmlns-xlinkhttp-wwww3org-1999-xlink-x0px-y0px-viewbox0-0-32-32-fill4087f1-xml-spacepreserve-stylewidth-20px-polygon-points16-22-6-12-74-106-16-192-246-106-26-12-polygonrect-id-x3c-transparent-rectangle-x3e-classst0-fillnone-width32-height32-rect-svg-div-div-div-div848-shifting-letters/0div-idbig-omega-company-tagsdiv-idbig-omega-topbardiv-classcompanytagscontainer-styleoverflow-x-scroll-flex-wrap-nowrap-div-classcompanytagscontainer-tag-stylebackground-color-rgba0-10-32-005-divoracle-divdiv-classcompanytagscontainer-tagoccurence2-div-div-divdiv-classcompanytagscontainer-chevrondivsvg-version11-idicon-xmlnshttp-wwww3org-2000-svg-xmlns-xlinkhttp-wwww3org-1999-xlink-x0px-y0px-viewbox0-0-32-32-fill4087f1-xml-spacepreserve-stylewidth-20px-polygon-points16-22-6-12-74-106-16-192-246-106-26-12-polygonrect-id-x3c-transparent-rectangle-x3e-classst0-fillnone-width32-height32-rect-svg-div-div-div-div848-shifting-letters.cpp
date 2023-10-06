class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        long long shft = 0;
        for(auto i : shifts){
            shft= (shft+i)%26;
        }
        
        for(int i = 0; i<n; i++){
            //cout<<s[i]<<" "<<shft<<"\n";
            long long val = (int)(s[i]-'a')+1;
            long long newval = (val+shft)%26;
            if(newval==0){newval = 26;}    
            char newchar = (char)('a' + newval - 1);
            s[i] = newchar;
            shft = (shft-(shifts[i])%26+26)%26;
        }   
            
        return s;
    }
};