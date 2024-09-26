class Solution {
public:
    bool countcheck(vector<vector<int>>& matrix,int k,int mid){
        int n=matrix.size(),count=0;
        int j=0;
        int i=n-1;
        while(i>=0 && j<n){
            if(matrix[i][j]<=mid){
                count+=(i+1);
                j++;
            }
            else{
                i--;
            }
        }
        return count>=k;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int left=matrix[0][0];
        int right=matrix[n-1][n-1];
        while(left<right){
            int mid=left+(right-left)/2;
            if(countcheck(matrix,k,mid)){
                right=mid;
            }
            else{
                left=mid+1;
            }
        }
        return left;
    }
};