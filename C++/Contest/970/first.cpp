#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(a%2 == 0 && b%2 == 0) cout<<"yes"<<endl;
        else if( (a == 0 && b%2 != 0) || (b == 0 && a%2 != 0) || (a%2 != 0 && b%2 != 0)) cout<<"no"<<endl;
        else if(a%2 == 0 && b%2 != 0) cout<<"yes"<<endl;
        else if(a%2 != 0 && b%2 == 0) cout<<"no"<<endl;
    }

    return 0;
}