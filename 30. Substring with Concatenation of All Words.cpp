class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        int n=words.size();
        int word_len=words[0].length();
        int str_len=s.length();
        if(n==0 || str_len==0){
            return ans;
        }
        if(str_len<n*word_len){
            return ans;
        }
        unordered_map<string,int> hash_map;
        for(int i=0;i<n;i++){
            hash_map[words[i]]++;
        }
        for(int i=0;i<=str_len-(n*word_len);i++){
            int j=i;
            unordered_map<string,int> order;
            while(j<i+(n*word_len)){
                string str=s.substr(j,word_len);
                order[str]++;
                if(order[str]>hash_map[str]){
                    break;
                }
                j+=word_len;
            }
            if(j==i+(n*word_len)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};