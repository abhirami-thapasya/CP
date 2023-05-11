class Solution {
public:
    bool isValid(string s) {
        map<char,int> m={{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
        stack<int> para;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]<0){
                para.push(s[i]);
            }
            if(m[s[i]]>0){
                if(para.empty()){
                    return false;
                }
                else{
                    if(m[para.top()]+m[s[i]]==0){
                        para.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(!para.empty()){
            return false;
        }
        return true;
    }
};