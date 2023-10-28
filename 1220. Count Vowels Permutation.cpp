class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<int>> dp(n+1,vector<int>(5,0));
        if(n==1){
            return 5;
        }
        for(int i=0;i<5;i++){
            dp[1][i]=1;
        }
        for(int k=2;k<n+1;k++){
            dp[k][0]=((dp[k-1][1]+dp[k-1][2])%1000000007+dp[k-1][4])%1000000007;
            dp[k][1]=(dp[k-1][0]+dp[k-1][2])%1000000007;
            dp[k][2]=(dp[k-1][1]+dp[k-1][3])%1000000007;
            dp[k][3]=(dp[k-1][2])%1000000007;
            dp[k][4]=(dp[k-1][2]+dp[k-1][3])%1000000007;
        }
        int sum=0;
        for(int q=0;q<5;q++){
            sum+=dp[n][q];
            sum%=1000000007;
        }
        return sum;
    }
};
