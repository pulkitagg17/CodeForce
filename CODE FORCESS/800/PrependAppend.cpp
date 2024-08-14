#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ans=0;
        string temp;
        cin>>temp;
        
        int i=0, j=n-1;
        while(i<j){
            if(temp[i] == temp[j])
                break;

            ans++;
            i++;
            j--;
        }

        cout<<n-(2*ans)<<endl;
        
    }
 
    return 0;
}