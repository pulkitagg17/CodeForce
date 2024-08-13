#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0; i<n ; i++){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;
        bool yes = true;
        for(int i=0 ; i<n ; i++){
            mp[arr[i]]++;

            if(mp.size() > 2){
                yes = false;
                break;
            }
        }

        if(mp.size() == 2){
            int len = begin(mp)->second;

            if(len != n/2 && len != (n+1)/2){
                yes = false;
            }
        }

        if(yes) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}