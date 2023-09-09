class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0;i<rowIndex+1;i++){
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
        return ans[rowIndex];
    }
};