#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        vector<string> sen;
        string str="";
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                sen.push_back(str);
                str="";
            }
            else{
                str+=S[i];
            }
        }
        sen.push_back(str);
        for(int i=sen.size()-1;i>0;i--){
            cout<<sen[i]<<".";
        }
        cout<<sen[0];
    } 
};


int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}