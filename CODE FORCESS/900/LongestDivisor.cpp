#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll t=1;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll i=1;
        while(n%i == 0){
            i++;
        }
        cout<<i-1<<endl;
    }

    return 0;
}