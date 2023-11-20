class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        dp[nums.size()-1]=1;
        int len=0;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            len=max(len,dp[i]);
        }
        return len;
    }
};