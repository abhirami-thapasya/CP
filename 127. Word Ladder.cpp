class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> s;
        for(auto it:wordList){
            s.insert(it);
        }
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        while(!q.empty()){
            string w=q.front().first;
            int l=q.front().second;
            q.pop();
            for(int i=0;i<w.length();i++){
                string str=w;
                char c='a';
                for(int j=0;j<26;j++){
                    str[i]=c+j;
                    if(s.count(str)){
                        q.push({str,l+1});
                        s.erase(str);
                        if(str==endWord){
                            return l+1;
                        }
                    }
                }
            }
        }
        return 0;
    }
};