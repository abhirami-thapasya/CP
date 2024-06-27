class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> prev(k+1,1),curr(k+1,1);
        int mod=1e9+7;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                curr[j]=(prev[j]+curr[j-1])%mod;
            }
            prev=curr;
        }
        return curr[k];
    }
};