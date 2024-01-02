class Solution {
public:
    bool check(string &a, string &c){
        string ah = a.substr(0,2);
        string ch = c.substr(0,2);
        
        if(ah==ch){return true;}
        int aho = stoi(ah);
        int cho = stoi(ch);
        
        string am = a.substr(2,2);
        string cm = c.substr(2,2);
        int ami = stoi(am);
        int cmi = stoi(cm);
        
        if(cho-aho==1 && cmi<ami){
            return true;
        }
        
        return false;
    }
    
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        sort(access_times.begin(),access_times.end());
        vector<string>ans;
        if(access_times.size()<3){return ans;}
 
        for(int i = 0; i<access_times.size()-2; ){
            if(access_times[i][0]!=access_times[i+2][0]){i++;continue;}
            int j = i+2;
            bool flag = false;
            while(j<access_times.size() && access_times[i][0]==access_times[j][0]){
                if(flag){j++; continue;}
                string a = access_times[j-2][1];
                string c = access_times[j][1];

                bool f = check(a,c);
                if(f){
                    flag = true;
                    ans.push_back(access_times[i][0]);
                }
                j++;
            }
            i = j;
        }
        
        return ans;
    }
};