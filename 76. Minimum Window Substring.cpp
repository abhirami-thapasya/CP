class Solution {
public:
    string minWindow(string s, string t) {
        string ans;
        int s_len=s.length();
        int t_len=t.length();
        int req=t_len;
        int min=s_len;
        if(min<req){
            return "";
        }
        unordered_map<char,int> h_map;
        for(int i=0;i<t_len;i++){
            h_map[t[i]]++;
        }
        int j=0,i=0,l=-1,r=-1;
        while(j<s_len){
            h_map[s[j]]--;
            if(h_map[s[j]]>=0){
                req--;
            }
            while(req==0){
                if(j-i+1<=min){
                    min=j-i+1;
                    l=i;
                    r=j;
                }
                h_map[s[i]]++;
                if(h_map[s[i]]>0){
                    req++;
                }
                i++;
            }
            j++;
        }
        if(l==-1 || r==-1){
            return "";
        }
        ans=s.substr(l,min);
        return ans;
    }
};