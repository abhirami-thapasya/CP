int main() {
    int n;
    cin>>n;
    map<string,int> m;
    while(n--){
        int test,mark;
        cin>>test;
        string name;
        cin>>name;
        if(test==1){
            cin>>mark;
            m[name]=mark;
        }
        else if(test==2){
            m[name]=0;
        }
        else if(test==3){
            cout<<m[name]<<endl;
        }
    }   
    return 0;
}