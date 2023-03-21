class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
         vector<string> ans;
        if(s.size()<=10){
            return ans;
         }
        map<string,int> data;
        for(int i=0;i<=s.size()-10;i++){
            string hstr=s.substr(i,10);
            data[hstr]++;
        }
        map<string,int> :: iterator it;
        for(it=data.begin();it!=data.end();++it){
            if((*it).second>1){
                ans.push_back((*it).first);
            }
        }
        return ans;
    }
};