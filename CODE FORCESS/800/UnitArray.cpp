#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int one=0, none=0;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];

            if(arr[i]== 1) one++;
            else none++;
        }
        int ans=0;
        if(none%2 != 0){
            ans++;
            one++;
            none--;
        }

        while(one<none && none>0){
            ans+=2;
            one += 2;
            none -= 2;
        }
        cout<<ans<<endl;
    }

    return 0;
}