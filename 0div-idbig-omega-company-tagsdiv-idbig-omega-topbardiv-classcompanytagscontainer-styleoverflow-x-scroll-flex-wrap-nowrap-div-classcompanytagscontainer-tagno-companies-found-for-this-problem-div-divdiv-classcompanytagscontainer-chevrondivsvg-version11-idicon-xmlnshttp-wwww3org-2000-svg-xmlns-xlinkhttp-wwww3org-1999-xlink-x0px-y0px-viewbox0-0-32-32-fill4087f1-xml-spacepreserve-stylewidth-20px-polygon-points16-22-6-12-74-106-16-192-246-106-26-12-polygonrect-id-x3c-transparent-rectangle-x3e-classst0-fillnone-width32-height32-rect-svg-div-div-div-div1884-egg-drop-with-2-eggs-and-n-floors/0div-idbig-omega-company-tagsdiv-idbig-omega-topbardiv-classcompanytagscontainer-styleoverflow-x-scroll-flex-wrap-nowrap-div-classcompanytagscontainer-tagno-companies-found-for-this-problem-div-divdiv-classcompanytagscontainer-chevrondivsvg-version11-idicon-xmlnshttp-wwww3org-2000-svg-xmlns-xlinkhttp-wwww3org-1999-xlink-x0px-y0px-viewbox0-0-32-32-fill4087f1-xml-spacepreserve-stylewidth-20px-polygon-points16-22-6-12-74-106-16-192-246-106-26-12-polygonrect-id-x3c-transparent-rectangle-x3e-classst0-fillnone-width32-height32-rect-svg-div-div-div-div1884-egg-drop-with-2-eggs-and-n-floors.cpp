class Solution {
public:
    int twoEggDrop(int n) {
        int x = 0;
        int el = 1;
        int cnt = 0;
        while(x<n){
            x+=el;
            el++;
        }
        return el-1;
    }
};