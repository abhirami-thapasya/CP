class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1);
        dp[0]=0;
        int i=1,m=1;
        while(i<=n){
            for(int j=1;j<=m;j++){
                if(i>n){
                    return dp;
                }
                dp[i++]=1+dp[i-m];
            }
            m=m*2;
        }
        return dp;
    }
};