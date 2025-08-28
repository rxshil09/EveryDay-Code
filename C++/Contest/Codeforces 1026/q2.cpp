#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.length();
        // cout<<"n "<<n;
        
        int flag = 0;
        int cnt = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '(') cnt++;
            else cnt--;

            if(i > 0 && i < n-1 && cnt == 0) flag = 1;
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }   
}