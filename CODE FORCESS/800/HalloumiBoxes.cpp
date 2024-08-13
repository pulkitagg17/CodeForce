#include<bits/stdc++.h>
using namespace std;

int main(){

    int box;
    cin>>box;

    while(box--){
        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }

        if(k==1 && !is_sorted(arr.begin(), arr.end())){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}