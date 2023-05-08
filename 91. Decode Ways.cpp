class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> count(n+1);
        if(s[0]=='0'){
            return 0;
        }
        count[0]=1;
        count[1]=1;
        for(int i=2;i<=n;i++){
            int val=s[i-1]-'0';
            if(val==0 && (s[i-2]-'0'>2 || s[i-2]=='0')){
                return 0;
            }
            if(val==0 && s[i-2]-'0'<3){
                count[i]=count[i-2];
                continue;
            }
            if(val<=9){
                count[i]+=count[i-1];
            }
            if((s[i-2]-'0')!=0 && ((s[i-2]-'0')*10)+val<27){
                count[i]+=count[i-2];
            }
        }
        return count[n];
    }
};