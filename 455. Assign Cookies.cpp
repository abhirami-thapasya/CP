class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        int i=0,j=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(i<m && j<n){
            if(s[i]>=g[j]){
                j++;
            }
            i++;
        }
        return j;
    }
};