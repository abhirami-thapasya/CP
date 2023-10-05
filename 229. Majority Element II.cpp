class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]!=-1){
                hash[nums[i]]++;
                if(hash[nums[i]]>(nums.size()/3)){
                    ans.push_back(nums[i]);
                    hash[nums[i]]=-1;
                }
            }
        }
        return ans;
    }
};