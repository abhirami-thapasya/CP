class Solution {
public:
    string numberToWords(int num) {
        if(num==0){
            return "Zero";
        }
        vector<string> unit={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"},
        tens={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"},
        els={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"},
        bp={"Billion","Million","Thousand",""};
        int i=0;
        string ans="";
        while(num>0){
            int power=pow(1000,3-i);
            int n=num/power;
            num=num%power;
            if(n==0){
                i++;
                continue;
            }
            if(n>=100){
                ans+=unit[n/100];
                ans+=" ";
                ans+="Hundred";
                ans+=" ";
                n%=100;
            }
            if(n>=20){
                ans+=tens[(n/10)-2];
                ans+=" ";
                n%=10;
                ans+=unit[n];
                if(n>0){
                    ans+=" ";
                }
            }
            else if(n>=10){
                ans+=els[(n%10)];
                ans+=" ";
            }
            else if(n>0){
                ans+=unit[n];
                ans+=" ";
            }
            ans+=bp[i];
            if(bp[i]!=""){
                ans+=" ";
            }
        }
        int l=ans.length();
        ans=ans.substr(0,l-1);
        return ans;
    }
};