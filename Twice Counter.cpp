#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            int a=0;
            unordered_map<string,int> m;
            for(int i=0;i<n;i++){
                string s;
                s=list[i];
                m[s]++;
                if(m[s]==2){
                    a++;
                }
                if(m[s]==3){
                    a--;
                }
            }
            return a;
        }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string list[n];
        for(int i=0;i<n;i++)
            cin>>list[i];
        Solution ob;    
        cout <<ob.countWords(list, n)<<endl;
    }
    return 0;
}