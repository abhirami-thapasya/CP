
class Solution {
 public:
  int minimumEffortPath(vector<vector<int>>& heights) {
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> t(m,vector<int>(n,INT_MAX));
        pq.push({0,{0,0}});
        t[0][0]=0;
        vector<int> dr={-1,0,1,0};
        vector<int> dc={0,1,0,-1};
        while(!pq.empty()){
            auto it=pq.top();
            int d=it.first;
            int r=it.second.first;
            int c=it.second.second;
            if(r==m-1 && c==n-1){
                return d;
            }
            pq.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<m && nc>=0 &&nc<n){
                    int effort=max(abs(heights[r][c]-heights[nr][nc]),d);
                    if(effort<t[nr][nc]){
                        t[nr][nc]=effort;
                        pq.push({effort,{nr,nc}});
                    }
                }
            }
        }
        return 0;
  }
};
