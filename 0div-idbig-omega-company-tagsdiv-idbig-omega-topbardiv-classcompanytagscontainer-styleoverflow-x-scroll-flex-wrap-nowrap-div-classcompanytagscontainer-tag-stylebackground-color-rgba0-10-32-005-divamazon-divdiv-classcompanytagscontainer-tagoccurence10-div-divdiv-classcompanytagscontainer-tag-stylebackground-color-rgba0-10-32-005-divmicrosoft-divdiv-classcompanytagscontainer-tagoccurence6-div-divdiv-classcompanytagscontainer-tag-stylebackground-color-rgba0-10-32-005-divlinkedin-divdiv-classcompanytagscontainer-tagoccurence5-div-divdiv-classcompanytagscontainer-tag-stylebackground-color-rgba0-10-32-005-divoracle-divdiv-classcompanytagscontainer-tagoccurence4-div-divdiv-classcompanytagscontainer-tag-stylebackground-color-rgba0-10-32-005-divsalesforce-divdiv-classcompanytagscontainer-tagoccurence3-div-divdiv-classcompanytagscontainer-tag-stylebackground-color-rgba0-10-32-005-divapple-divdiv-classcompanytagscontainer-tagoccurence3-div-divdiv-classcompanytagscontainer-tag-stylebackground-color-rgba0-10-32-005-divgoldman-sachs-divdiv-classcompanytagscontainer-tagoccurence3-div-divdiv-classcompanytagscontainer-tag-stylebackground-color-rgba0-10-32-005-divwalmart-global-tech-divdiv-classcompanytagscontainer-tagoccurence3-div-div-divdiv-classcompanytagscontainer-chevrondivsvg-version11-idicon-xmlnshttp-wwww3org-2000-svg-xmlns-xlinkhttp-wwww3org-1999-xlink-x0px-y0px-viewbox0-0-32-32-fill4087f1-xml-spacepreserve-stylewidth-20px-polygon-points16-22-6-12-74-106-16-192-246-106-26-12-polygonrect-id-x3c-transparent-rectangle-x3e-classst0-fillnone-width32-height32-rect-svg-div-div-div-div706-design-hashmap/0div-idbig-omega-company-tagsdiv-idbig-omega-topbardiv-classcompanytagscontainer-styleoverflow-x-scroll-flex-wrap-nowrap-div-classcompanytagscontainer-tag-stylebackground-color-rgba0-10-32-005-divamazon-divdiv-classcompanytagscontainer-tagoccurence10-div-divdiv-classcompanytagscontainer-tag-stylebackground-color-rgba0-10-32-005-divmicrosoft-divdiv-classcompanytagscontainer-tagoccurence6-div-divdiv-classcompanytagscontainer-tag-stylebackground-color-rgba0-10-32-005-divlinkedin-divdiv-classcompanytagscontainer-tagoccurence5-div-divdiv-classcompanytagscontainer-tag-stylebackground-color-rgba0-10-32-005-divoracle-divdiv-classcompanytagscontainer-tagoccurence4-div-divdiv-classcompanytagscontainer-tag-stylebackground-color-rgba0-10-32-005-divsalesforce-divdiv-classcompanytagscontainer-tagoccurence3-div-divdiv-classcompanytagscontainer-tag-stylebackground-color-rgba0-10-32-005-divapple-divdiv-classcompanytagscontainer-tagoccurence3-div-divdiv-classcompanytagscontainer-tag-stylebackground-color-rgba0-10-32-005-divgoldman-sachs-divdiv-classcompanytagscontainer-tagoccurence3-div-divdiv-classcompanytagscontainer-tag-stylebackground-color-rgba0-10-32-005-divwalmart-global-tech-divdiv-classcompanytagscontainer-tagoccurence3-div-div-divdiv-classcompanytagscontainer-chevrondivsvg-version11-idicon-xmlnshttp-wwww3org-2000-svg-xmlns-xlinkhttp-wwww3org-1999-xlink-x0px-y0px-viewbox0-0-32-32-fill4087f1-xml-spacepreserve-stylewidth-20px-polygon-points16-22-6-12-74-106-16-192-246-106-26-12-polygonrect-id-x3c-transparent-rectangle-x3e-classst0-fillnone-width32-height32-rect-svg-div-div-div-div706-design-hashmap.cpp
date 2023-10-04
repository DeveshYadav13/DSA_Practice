class MyHashMap {
public:
    int H[1000001];
    MyHashMap() {
        memset(H,-1, sizeof(H));
    }
    
    void put(int key, int value) {
        H[key] = value;
    }
    
    int get(int key) {
        return H[key];
    }
    
    void remove(int key) {
        H[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */