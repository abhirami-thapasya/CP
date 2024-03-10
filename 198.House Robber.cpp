class Solution {
public:
    int f(int n,vector<int>& dp,vector<int>& nums){
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0){
            return nums[n];
        }
        int pick=nums[n]+f(n-2,dp,nums);
        int notpick=0+f(n-1,dp,nums);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return f(n-1,dp,nums);
    }
};