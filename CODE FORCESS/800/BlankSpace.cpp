#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        bool yes = false;
        int cnt=0;
        int ans=0;

        for(int i=0 ; i<arr.size() ; i++){
            if(arr[i] == 0){
                cnt++;
            }else{
                ans = max(cnt, ans);
                cnt=0;
            }
        }

        if(arr[n-1] == 0) ans = max(cnt, ans);

        cout <<ans<< endl;
    }

    return 0;
}
