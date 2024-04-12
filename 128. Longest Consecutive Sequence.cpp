class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> l{nums.begin(),nums.end()};
        int maxm=0;
        for(int i:nums){
            if(!l.count(i-1)){
                int a=i;
                int length=1;
                while(l.count(++a)){
                    length++;
                }
            maxm=max(maxm,length);
            }
        }
        return maxm;
    }
};