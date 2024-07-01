class Solution {
public:
    bool checkValidString(string s) {
        int minm=0,maxm=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                minm++;
                maxm++;
            }
            else if(s[i]==')'){
                minm--;
                maxm--;
            }
            else{
                minm--;
                maxm++;
            }
            if(minm<0){
                minm=0;
            }
            if(maxm<0){
                return false;
            }
        }
        return minm==0;
    }
};