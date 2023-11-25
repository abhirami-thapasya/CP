class RandomizedSet {
public:
    vector<int> v;
    map<int,int> ind;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(ind.find(val)!=ind.end()){
            return false;
        }
        ind[val]=v.size();
        v.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(ind.find(val)==ind.end()){
            return false;
        }
        int i=ind[val];
        v[i]=v[v.size()-1];
        v.pop_back();
        ind[v[i]]=i;
        ind.erase(val);
        return true;
    }
    
    int getRandom() {
        int k=rand() % v.size();
        return v[k];
    }
};