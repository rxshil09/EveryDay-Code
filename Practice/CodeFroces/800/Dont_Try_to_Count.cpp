#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m; 
        cin>>n>>m;

        string x;
        cin>>x;

        string s;
        cin>>s;

        int ans = -1;
        int cnt = 0;

        for(int i = 0; i<n; i++){

            if(x.find(s) == x.npos || cnt > 5){
                break;
            }
            else{
                x = x.append(x);
                cnt++;
                ans = 1;
            }
        }
    }
}