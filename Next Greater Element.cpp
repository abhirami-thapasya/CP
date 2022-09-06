
#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> array){
    int m=array.size();
    stack<int> st;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        while(!st.empty()&&array[i]>array[st.top()]){
            v[st.top()]=array[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        v[st.top()]=-1;
        st.pop();
    }
    return v;
}

int main() {
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    vector<int> nge=NGE(array);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" "<<nge[i]<<endl;
    }
    return 0;
}