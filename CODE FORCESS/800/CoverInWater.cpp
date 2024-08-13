#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int dot = 0;
        bool cont = true;

        for(int i=0 ; i<n ; i++){
            if(s[i] == '.') dot++;

            if(i>0 && i<n)
                if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                    cout<<2<<endl;
                    cont = false;
                    break;
                    }
        }

        if(cont) cout<<dot<<endl;
    }

    return 0;
}