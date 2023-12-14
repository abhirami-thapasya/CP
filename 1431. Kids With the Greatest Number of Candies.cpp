class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxm=0;
        vector<bool> result(candies.size(),false); 
        for(int i=0;i<candies.size();i++){
            maxm=max(candies[i],maxm);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxm){
                result[i]=true;
            }
        }
        return result;
    }
};