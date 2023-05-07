class Solution {
public:
    int countSubstrings(string s) {
        int count=0,l,r;
        for(int i=0;i<s.length();i++){
            // substring of odd number length
            l=r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
            // substring palindrome of even number characters
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};