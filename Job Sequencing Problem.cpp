
class Solution 
{
    public:
    bool static comparison(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comparison);
        int sz=0;
        for(int i=0;i<n;i++){
            sz=max(sz,arr[i].dead);
        }
        vector<int> ans(sz+1,-1);
        int jobnum=0,totalprofit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(ans[j]==-1){
                    ans[j]=arr[i].id;
                    jobnum++;
                    totalprofit+=arr[i].profit;
                    break;
                }
            }
        }
        return {jobnum,totalprofit};
    } 
};