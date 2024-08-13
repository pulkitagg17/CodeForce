#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        bool yes = false;
        for(auto i:arr){
            if(i == k){
                yes = true;
                break;
            }
        }

        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}