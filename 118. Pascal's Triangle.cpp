class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int i=0;i<numRows;i++){
           vector<int> v(i+1);
           v[0]=1;
           v[i]=1;
           for(int j=1;j<i;j++){
               if(i==1){
                   continue;
               }
               v[j]=ans[i-1][j-1]+ans[i-1][j];
           }
           ans.push_back(v);
       }
       return ans;
    }
};