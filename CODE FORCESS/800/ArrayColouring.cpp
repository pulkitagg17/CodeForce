#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        int isOdd = 0;
        for(int i=0 ;i<n ; i++){
            cin>>arr[i];
        }

        for(auto i:arr){
            if(i%2 != 0) isOdd++;
        }

        if(isOdd%2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        

    }

    return 0;
}