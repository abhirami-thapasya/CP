class Solution {
public:
    string reverseVowels(string s) {
        set<char> vow={'a','e','i','o','u','A','E','O','U','I'};
        stack<char> v;
        queue<int> q;
        for(int i=0;i<s.length();i++){
            if(vow.count(s[i])){
                v.push(s[i]);
                q.push(i);
            }
        }
        string ans=s;
        while(!q.empty()){
            int i=q.front();
            q.pop();
            int c=v.top();
            v.pop();
            ans[i]=c;
        }
        return ans;
    }
};