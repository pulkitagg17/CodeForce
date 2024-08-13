#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
            mini = min(mini, arr[i]);
        }
        int ttl = maxi+mini;
        for(auto i:arr){
            cout<<ttl-i<<" ";
        }cout<<endl;
    }
 
    return 0;
}