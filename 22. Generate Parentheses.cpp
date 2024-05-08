class Solution {
private:
    void dfs(int l,int r,string& s,vector<string>& ans){
        if(!l && !r){
            ans.push_back(s);
            return;
        }
        if(l>0){
            s.push_back('(');
            dfs(l-1,r,s,ans);
            s.pop_back();
        }
        if(l<r){
            s.push_back(')');
            dfs(l,r-1,s,ans);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> ans;
        dfs(n,n,s,ans);
        return ans;
    }
};