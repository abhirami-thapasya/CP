class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=height[0];
        right[0]=height[0];
        int count=0;
        if(n<3){
            return count;
        }
        for(int i=1;i<n;i++){
            if(height[i]<left[i-1]){
                left[i]=left[i-1];
            }
            else{
                left[i]=height[i];
            }
        }
        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            if(height[i]<right[i+1]){
                right[i]=right[i+1];
            }
            else{
                right[i]=height[i];
            }
        }
        for(int i=1;i<n-1;i++){
            count+=min(left[i],right[i])-height[i];
        }
        return count;
    }
};