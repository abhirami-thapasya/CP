class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int i=0;
        while(i<nums.size()){
            if(i<nums.size()-1 && nums[i]==nums[i+1]){
                i++;
                continue;
            }
            if(i==nums.size()){
                if(nums[i]==nums[i-1]){
                    i++;
                    continue;
                }
            }
            nums[count]=nums[i];
            i++;
            count++;
        }
        return count;
    }
};