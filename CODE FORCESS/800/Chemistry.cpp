#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
    
        unordered_map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }

        int oddOnes = 0;

        for(auto i:mp){
            if(i.second%2 != 0){
                oddOnes++;
            }
        }
        if(k < oddOnes-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 

    }

    return 0;
}