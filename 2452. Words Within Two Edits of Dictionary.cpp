class Solution {
    int samechar(string a,string b){
        int count=0;
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                count++;
            }
        }
        return count;
    }
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        if(queries[0].size()==1){
            return queries;
        }
        for(auto a:queries){
            for(auto b:dictionary){
                if(a==b){
                    ans.push_back(a);
                    break;
                }
                else if(samechar(a,b)>=a.size()-2){
                    ans.push_back(a);
                    break;
                }
            }
        }
        return ans;
    }
};