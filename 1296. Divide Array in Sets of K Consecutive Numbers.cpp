class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto it:nums){
            m[it]++;
        }
        while(!m.empty()){
            int start=m.begin()->first;
            for(int i=0;i<k;i++){
                if(m.find(start+i)==m.end()){
                    return false;
                }
                m[start+i]--;
                if(m[start+i]==0){
                    m.erase(start+i);
                }
            }
        }
        return true;
    }
};