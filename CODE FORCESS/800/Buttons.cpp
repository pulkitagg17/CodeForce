#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a, b, c;
    cin>>a>>b>>c;

    if(a==b){
        if(c%2 == 0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    else if(a==b && b==c){
        cout<<"First"<<endl;
    }

    else if(a>b) cout<<"First"<<endl;
    else if(b>a) cout<<"Second"<<endl;

    }

    return 0;
}