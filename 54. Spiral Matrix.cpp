class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> mat;
        int i_low=0,i_high=n-1,j_low=0,j_high=m-1;
        while(i_low<=i_high && j_low<=j_high){
            for(int j=j_low;j<=j_high;j++){
                mat.push_back(matrix[i_low][j]);
            }
            i_low++;
            for(int i=i_low;i<=i_high;i++){
                mat.push_back(matrix[i][j_high]);
            }
            j_high--;
            if(i_low<=i_high){
                for(int j=j_high;j>=j_low;j--){
                    mat.push_back(matrix[i_high][j]);
                }
            }
            i_high--;
            if(j_low<=j_high){
                for(int i=i_high;i>=i_low;i--){
                    mat.push_back(matrix[i][j_low]);
                }
            }
            j_low++;
        }
        return mat;
    }
};