class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0){
            return false;
        }
        map<int,int> m;
        for(auto it:hand){
            m[it]++;
        }
        while(m.size()){
            auto it=m.begin();
            int num=it->first;
            for(int i=0;i<groupSize;i++){
                if(m.find(num+i)==m.end() || m[num+i]==0){
                    return false;
                }
                m[num+i]--;
                if(m[num+i]==0){
                    m.erase(num+i);
                }
            }
        }
        return true;
    }
};