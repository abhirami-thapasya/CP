class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size();
        int n=matrix.size();
        int i=0,j=m-1;
        int a=0;
        while(a<n){
            while(j>=i){
                int mid=i+(j-i)/2;
                if(matrix[a][mid]<target){
                    i=mid+1;
                }
                else if(matrix[a][mid]>target){
                    j=mid-1;
                }
                else{
                    return true;
                }
            }
            a++;
            i=0;
            j=m-1;
        }
        return false;
    }
};