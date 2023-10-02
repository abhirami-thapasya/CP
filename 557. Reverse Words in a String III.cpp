class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        while(i<=s.size()){
            if(s[i]==' ' || i==s.size()){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
            i++;
        }
        return s;
    }
};