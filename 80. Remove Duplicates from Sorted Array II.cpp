class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        for(auto n:nums){
            if(count<2 || n!=nums[count-2]){
                nums[count++]=n;
            }
        }
        return count;
    }
};