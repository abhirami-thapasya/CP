#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minCost(int q1,int q2,int costOfGreen,int costOfPurple){
        int cost1,cost2;
        cost1=(q1*costOfGreen)+(q2*costOfPurple);
        cost2=(q2*costOfGreen)+(q1*costOfPurple);
        if(cost1>=cost2){
            return cost2;
        }
        else{
            return cost1;
        }
    }
};
int main(){
    int T;
    cin>>T;
    while(T--){
        int costOfGreen,costOfPurple;
        cin>>costOfGreen>>costOfPurple;
        int n;
        cin>>n;
        int arr[n][2];
        int q1=0,q2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i][1]>>arr[i][2];
            q1+=arr[i][1];
            q2+=arr[i][2];
        }
        Solution ob;
        auto minimum_cost=ob.minCost(q1,q2,costOfGreen,costOfPurple);
        cout<<minimum_cost<<endl;
    }
    return 0;
}