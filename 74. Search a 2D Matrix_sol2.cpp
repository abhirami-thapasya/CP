class Solution {
private:
    bool binarySearch(vector<vector<int>>& matrix,int n,int low,int high,int target){
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[n][mid]==target){
                return true;
            }
            else if(matrix[n][mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size();
        int n=matrix.size();
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(high+low)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            if(matrix[mid][m-1]==target){
                return true;
            }
            if(matrix[mid][0]<target && matrix[mid][m-1]>target){
                return binarySearch(matrix,mid,0,m-1,target);
            }
            if(matrix[mid][0]>target){
                high=mid-1;
            }
            if(matrix[mid][m-1]<target){
                low=mid+1;
            }
        }
        return false;
    }
};