class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set st(wordDict.begin(),wordDict.end());
        int n=s.size();
        vector<bool> dp(n+1,true);
        for(int i=1;i<=n;i++){
            dp[i]=false;
            for(int j=0;j<i;j++){
                if(st.count(s.substr(j,i-j))){
                    dp[i]=dp[j] || dp[i];
                }
            }
        }
        return dp[n];
    }
};