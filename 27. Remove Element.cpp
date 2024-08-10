class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(auto n:nums){
            if(n!=val){
                nums[count++]=n;
            }
        }
        return count;
    }
};