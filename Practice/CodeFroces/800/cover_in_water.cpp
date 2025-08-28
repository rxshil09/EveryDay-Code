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

        bool flag = 0;
        int cnt = 0;

        for(int i = 2; i<n; i++){
            if( (s[i-2] == s[i-1]) &&( s[i-1] == s[i])  && ( s[i] == '.')) flag = 1;
        }

        for(int i = 0; i<n; i++){
            if(s[i] == '.') cnt++;
        }

        if(flag) cout<<'2'<<endl;
        else cout<<cnt<<endl;
        
    }
}