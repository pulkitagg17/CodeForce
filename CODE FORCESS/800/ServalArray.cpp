#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a , a);
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> temp(n);
        for(int i=0 ;i<n ; i++){
            cin>>temp[i];
        }

        bool sach = false;
        for(int i=0 ;i<n ; i++){
            for(int j=i ;j<n ; j++){
                if(gcd(temp[i],temp[j]) <= 2){
                    sach = true;
                    break;
                }
            }
        }

        if(sach) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
 
    return 0;
}