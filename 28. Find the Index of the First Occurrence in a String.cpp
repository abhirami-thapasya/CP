class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int h=haystack.length();
        int i=0;
        while(i<h-n+1){
            string str=haystack.substr(i,n);
            if(str==needle){
                return i;
            }
            i++;
        }
        return -1;
    }
};