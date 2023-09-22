class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ml = -1, gl = -1, pl = -1;
        int mc = 0, gc = 0, pc = 0;
        
        for(int i = 0; i<garbage.size(); i++){
            string s = garbage[i];
            for(auto c : s){
                if(c=='M'){
                    ml = i;
                    mc++;
                }
                else if(c=='G'){
                    gl = i;
                    gc++;
                }
                else{
                    pl = i;
                    pc++;
                }
            }
        }
        cout<<gc<<" "<<pc<<" "<<mc<<"\n";
        cout<<gl<<" "<<pl<<" "<<ml<<"\n";
        bool p = false, m = false, g = false;
        
        for(int i = 0; i<travel.size(); i++){
            if(pl!=-1 && i!=pl && !p){pc+=travel[i];}
            else{p = true;}
            
            if(ml!=-1 && i!=ml && !m){mc+=travel[i];}
            else{m = true;}
            
            if(gl!=-1 && i!=gl && !g){gc+=travel[i];}
            else{g = true;}
        }
        cout<<gc<<" "<<pc<<" "<<mc<<"\n";
        return mc+gc+pc;
    }
};