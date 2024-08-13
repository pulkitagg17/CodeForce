#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n-1);
        for(int i=0 ; i<arr.size() ; i++){
            cin>>arr[i];
        }

        int cnt=0;
        for(auto i:arr){
            cnt += i;
        }

        if(cnt<0) cout<<abs(cnt)<<endl;
        else cout<<-cnt<<endl;
        
    }

    return 0;
}