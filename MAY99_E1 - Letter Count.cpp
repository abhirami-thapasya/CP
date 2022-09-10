#include <bits/stdc++.h>
using namespace std;

int has[256];

char max_occurance(vector<char> v){
    int n=v.size();
    for(int i=0;i<n;i++){
        has[v[i]-'A']++;
    }
    int freq=0;
    char result='{';
    for(int i=0;i<n;i++){
        if(has[v[i]-'A']>freq){
            freq=has[v[i]-'A'];
            result=v[i];
        }
        else if((has[v[i]-'A']==freq)&&((v[i]-'A')<(result-'A'))){
            result=v[i];
        }
    }
    return result;
}
int main(){
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);    
    }
    cout<<max_occurance(v);
    return 0;
}