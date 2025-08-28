#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;

        int j = 0;
        int count = 0;
        while(l<=r){
            l = l+j+1;
            count++;
            j++;
        }

        cout<<count<<endl;
    }

    return 0;
}