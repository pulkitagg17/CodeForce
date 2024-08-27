#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        sort(arr.begin(), arr.end());

        int ans=1;
        int temp = 1;
        for(int i=1 ; i<n ; i++){
            if(arr[i]-arr[i-1] <= k)
                temp++;
            else
                temp = 1;

            ans = max(temp,ans);
        }
        cout<<n-ans<<endl;   
    }


    return 0;
}