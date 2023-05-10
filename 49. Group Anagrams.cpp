class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> hash;
        for(int i=0;i<strs.size();i++){
            map<char,int> key;
            for(int j=0;j<strs[i].length();j++){
                key[strs[i][j]]++;
            }
            hash[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it=hash.begin();it!=hash.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};