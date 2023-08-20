class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> T_log;
        vector<int> days(n);
        for(int i=n-1;i>=0;i--){
            int num=0;
            while(!T_log.empty() && T_log.top().first<=temperatures[i]){
                num+=T_log.top().second;
                T_log.pop();
            }
            if(T_log.empty()){
                num=0;
            }
            else{
                num++;
            }
            T_log.push({temperatures[i],num});
            days[i]=num;
        }
        return days;
    }
};