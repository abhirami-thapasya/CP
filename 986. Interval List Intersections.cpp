class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int i=0,j=0;
        vector<vector<int>> ans;
        while(i<firstList.size() && j<secondList.size()){
            vector<int> t={max(firstList[i][0],secondList[j][0]),min(firstList[i][1],secondList[j][1])};
            if(t[0]<=t[1]){
                ans.push_back(t);
            }
            if(firstList[i][1] < secondList[j][1]){
                i++;
            }
            else if(firstList[i][1] > secondList[j][1]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
    }
};