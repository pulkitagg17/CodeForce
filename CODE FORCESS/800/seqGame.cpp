#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i=1 ; i<arr.size() ; i++){
        if(arr[i-1] > arr[i]){
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }else{
            ans.push_back(arr[i]);
        }
    }

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    }

    return 0;
}