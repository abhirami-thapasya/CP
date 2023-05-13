class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1,j=0;
        for(int i=0;i<piles.size();i++){
            j=max(j,piles[i]);
        }
        int res=j;
        while(j>=i){
            int mid=i+(j-i)/2;
            long long int time=0;
            for(int i=0;i<piles.size();i++){
                time+=ceil(piles[i]/mid);
                if(piles[i]%mid!=0){
                    time+=1;
                }
            }
            if(time<=h){
                res=min(res,mid);
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return res;
    }
};