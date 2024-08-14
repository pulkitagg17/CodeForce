#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ans;
        vector<int>temp(n);
        for(int i=0; i<n ;i++){
            cin>>temp[i];
        }

        int sumXOR = accumulate(temp.begin(), temp.end(), 0, std::bit_xor<int>());

        if(n%2 != 0)
            cout<<sumXOR<<endl;
        else
            if(sumXOR == 0)
                cout<<0<<endl;
            else    
                cout<<-1<<endl;
    }
 
    return 0;
}