#include <bits/stdc++.h> 
using namespace std;

void sol(string str,int i,string s,vector<string>& seq){
    if(i>=str.size()){
        if(s.size()>0){
            seq.push_back(s);
        }
        return;
    }
    sol(str,i+1,s,seq);
    s.push_back(str[i]);
    sol(str,i+1,s,seq);
}
vector<string> subsequences(string str){
	
	vector<string> seq;
    string s;
    int index=0;
    sol(str,index,s,seq);
    return seq;
}