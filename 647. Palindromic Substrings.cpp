class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length(),count=0;
        for(int i=0;i<n;i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[r]==s[l]){
                l--;
                r++;
                count++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[r]==s[l]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};