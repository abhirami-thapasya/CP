class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns=s.size();
        int nt=t.size();
        if(ns!=nt){
            return false;
        }
        map<char,int> hash;
        for(int i=0;i<nt;i++){
            hash[t[i]]++;
        }
        for(int i=0;i<ns;i++){
            hash[s[i]]--;
        }
        for(int i=0;i<nt;i++){
            if(hash[t[i]]>0){
                return false;
            }
        }
        return true;
    }
};