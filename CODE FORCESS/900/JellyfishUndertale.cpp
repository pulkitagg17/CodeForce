#include<bits/stdc++.h>
using namespace std;

int main(){

    int t=1;
    cin>>t;

    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> tools(n);
        for(int i=0 ; i<n ; i++){
            cin>>tools[i];
        }
        
        long long sum=b;
        for(auto i:tools){
            sum += min(1LL+i, 1LL*a) -1;
        }
        cout<<sum<<endl;
    }

    return 0;
}