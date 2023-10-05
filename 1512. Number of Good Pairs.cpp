class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> hash;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        auto it=hash.begin();
        for(;it!=hash.end();it++){
            if(it->second>1){
                sum+=((it->second-1)*it->second)/2;
            }
        }
        return sum;
    }
};