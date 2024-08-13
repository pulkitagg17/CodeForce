#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0 ;i<n ; i++){
            cin>>arr[i];
        }
        int mini = INT_MAX;
        if(!is_sorted(arr.begin(), arr.end())) cout<<0<<endl;
        else{
            for(int i=1; i<arr.size() ; i++){
                if(arr[i]>= arr[i-1]){
                    int diff = arr[i]-arr[i-1];
                    int fin = (diff/2)+1;
                    mini = min(mini,fin);
                }
            }
            cout<<mini<<endl;
        }      

    }

    return 0;
}