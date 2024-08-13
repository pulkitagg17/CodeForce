#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
 
        if(b<y) cout<<-1<<endl;
        else{
            if((x+b-y)<a) cout<<-1<<endl;
            else   
                cout<<(2*(b-y) + (x-a))<<endl;
        }
    }
 
    return 0;
}