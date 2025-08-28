#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        if( (a>101 && a<= 109) || (a>=1010 && a<=1099) ||(a>=10100 && a<=10999)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}