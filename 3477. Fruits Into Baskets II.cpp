class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplaced=0;
        vector<bool> used(baskets.size(),false);
        for(auto f:fruits){
            int flag=true;
            for(int i=0;i<baskets.size();i++){
                if(f<=baskets[i] && !used[i]){
                    used[i]=true;
                    flag=false;
                    break;
                }
            }
            if(flag){
                unplaced++;
            }
        }
        return unplaced;
    }
};