class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n = asteroids.size();
        int i = 0;
        long long nmass = mass;
        
        while(i<n && nmass >= asteroids[i]){
            nmass+=asteroids[i++];
        }
        
        return i==n;
    }
};