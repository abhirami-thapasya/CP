class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int tot=rows*cols,count=1,i=rStart,j=cStart,inc=1;
        vector<vector<int>> ans;
        ans.push_back({rStart,cStart});
        while(count<tot){
            for(int k=0;k<inc;k++){
                j++;
                if(i<rows && i>=0 && cols>j && j>=0){
                    ans.push_back({i,j});
                    count++;
                }
            }
            for(int k=0;k<inc;k++){
                i++;
                if(i<rows && i>=0 && cols>j && j>=0){
                ans.push_back({i,j});
                count++;
                }
            }
            inc++;
            for(int k=0;k<inc;k++){
                j--;
                if(i<rows && i>=0 && cols>j && j>=0){
                ans.push_back({i,j});
                count++;
                }
            }
            for(int k=0;k<inc;k++){
                i--;
                if(i<rows && i>=0 && cols>j && j>=0){
                ans.push_back({i,j});
                count++;
                }
            }
            inc+=1;
        }
        return ans;
    }
};