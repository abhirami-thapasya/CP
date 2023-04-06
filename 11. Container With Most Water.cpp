class Solution {
public:
    int maxArea(vector<int>& height) {
        int mArea=0;
        map<int,int> hmap;
        for(int i=0;i<height.size();i++){
            hmap[i]=height[i];
        }
        int i=0,j=height.size()-1;
        while(j>i){
            int val=(j-i)*min(height[i],height[j]);
            if(mArea<val){
                mArea=val;
            }
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mArea;       
    }
};