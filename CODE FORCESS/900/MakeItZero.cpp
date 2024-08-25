#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

    ll t=1;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<int> arr(n);
        for(ll i=0 ; i<n ; i++)
            cin>>arr[i];

        if(n%2 == 0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }else{
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }

    return 0;
}