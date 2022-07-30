#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        int n=s1.size();
        int m=s2.size();
        string s,q;
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<m;j++){
                if(s1[i]==s2[j]){
                    a++;
                }
            }
            if(a==0){
                s.push_back(s1[i]); 
            }
        }
        for(int i=0;i<m;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(s2[i]==s1[j]){
                    a++;
                }
            }
            if(a==0){
                s.push_back(s2[i]);    
            }
        }
        //s=s+q;
	  if(s.size()==0){
		return "-1";
        }
        return s;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        Solution obj;
        string res=obj.concatenatedString(s1,s2);
        cout<<res<<endl;
    }
    return 0;
}