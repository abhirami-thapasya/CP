class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        dp[0][0]=true;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int k=stones[i]-stones[j];
                if(k>j+1){
                    continue;
                }
                if(dp[j][k-1] || dp[j][k] || dp[j][k+1]){
                    dp[i][k]=true;
                    if(i==n-1){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};