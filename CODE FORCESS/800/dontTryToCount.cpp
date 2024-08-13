#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string s1,s2;
        cin>>s1>>s2;
        int cnt = 0;
        bool yes = false;
        for(int i=0 ; i<=5 ; i++){
            if (s1.find(s2) != string::npos) {
                yes = true;
                break;
            }
            s1 += s1;
            cnt++;
        }
        if(yes) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}