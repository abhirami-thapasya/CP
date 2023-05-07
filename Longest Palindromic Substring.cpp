class Solution {
public:
    string longestPalindrome(string s) {
        int len=0;
        string str;
        int l,r;
        for(int i=0;i<s.length();i++){
            l=r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(len<r-l+1){
                    len=r-l+1;
                    str=s.substr(l,len);
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(len<r-l+1){
                    len=r-l+1;
                    str=s.substr(l,len);
                }
                l--;
                r++;
            }
        }
        return str;
    }
}; 



