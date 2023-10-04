class CustomStack {
public:
    vector<int>vc;
    int size;
    CustomStack(int maxSize) {
       size = maxSize;
    }
    
    void push(int x) {
        if(vc.size()<size){
            vc.push_back(x);
        }
    }
    
    int pop() {
        if(vc.size()>0){
            int x = vc[vc.size()-1];
            vc.pop_back();
            return x;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i<min(k,(int)vc.size()); ++i){
            vc[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */