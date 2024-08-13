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

        sort(arr.begin(), arr.end());

        if(arr[0] == arr[arr.size()-1]) cout<<-1<<endl;
        else{
            vector<int> c;
            vector<int> b;
            int temp = arr[arr.size()-1];

            for(int i=0 ; i<n ; i++){
                if(arr[i]==temp){
                    c.push_back(arr[i]);
                }else{
                    b.push_back(arr[i]);
                }
            }

            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i:b){
                cout<<i<<" ";
            }cout<<endl;

            for(auto i:c){
                cout<<i<<" ";
            }cout<<endl;
        }    

    }

    return 0;
}