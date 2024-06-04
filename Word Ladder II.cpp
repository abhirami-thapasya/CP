class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        unordered_set<string> s(wordList.begin(),wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<string> store;
        int l=1;
        vector<vector<string>> ans;
        while(!q.empty()){
            vector<string> node=q.front();
            q.pop();
            if(node.size()>l){
                l++;
                for(auto it:store){
                    s.erase(it);
                }
                store.clear();
            }
            string lastword=node.back();
            if(lastword==endWord){
                if(!ans.size()){
                    ans.push_back(node);
                }
                else if(ans[0].size()==node.size()){
                    ans.push_back(node);
                }
                else{
                    return ans;
                }
            }
            for(int i=0;i<lastword.size();i++){
                char og=lastword[i];
                for(char c='a';c<='z';c++){
                    lastword[i]=c;
                    if(s.count(lastword)){
                        node.push_back(lastword);
                        q.push(node);
                        store.push_back(lastword);
                        node.pop_back();
                    }
                }
                lastword[i]=og;
            }
        }
        return ans;
    }