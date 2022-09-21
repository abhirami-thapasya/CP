#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findTime(string S1, string S2) {
        map<char,int> m;
        for(int i=0;i<S1.size();i++){
            m[S1[i]]=i;
        }
        int time=m[S2[0]];
        for(int i=1;i<S2.size();i++){
            time+=abs(m[S2[i]]-m[S2[i-1]]);
        }
        return time;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1,S2;
        cin>>S1;
        cin>>S2;

        Solution ob;
        cout<<ob.findTime(S1,S2)<<endl;
    }
    return 0;
}