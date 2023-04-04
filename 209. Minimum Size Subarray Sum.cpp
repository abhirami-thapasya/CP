class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum=0;
        int min=INT_MAX;
        while(j<nums.size()){
            if(target>sum){
                sum+=nums[j];
                j++;
            }
            while(target<=sum){
                if(min>j-i){
                    min=j-i;
                }
                sum-=nums[i];
                i++;
            }
        }
        if(min>nums.size()){
            return 0;
        }
        return min;
    }
};