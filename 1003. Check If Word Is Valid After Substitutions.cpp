class Solution {
public:
    bool isValid(string s) {
       map<char,int> m={{'a',-1},{'b',0},{'c',1}};
       stack<char> st;
       for(int i=0;i<s.size();i++){
           if(m[s[i]]!=-1){
               if(st.empty()){
                   return false;
               }
               else{
                   if(m[s[i]]==0){
                       if(m[st.top()]!=-1){
                           return false;
                       }
                       else{
                           st.push(s[i]);
                       }
                   }
                   else if(m[s[i]]==1){
                       int val=m[st.top()];
                       if(val==0){
                           st.pop();
                           st.pop();
                       }
                       else{
                           return false;
                       }
                   }
               }
           }
           else{
               st.push(s[i]);
           }
       } 
       if(st.empty()){
           return true;
       }
       return false;
    }
};