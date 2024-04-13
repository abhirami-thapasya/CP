class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,maxm=0,j=0;
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++){
            maxm=max(++v[s[i]-'A'],maxm);
            while(k<i-j+1-maxm){
                v[s[j++]-'A']--;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};