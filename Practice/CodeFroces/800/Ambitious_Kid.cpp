#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;

        vector<int>arr(n);
        int sml = INT_MAX;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if((abs(sml) > abs(arr[i]))) sml = arr[i];
        } 
        cout<<abs(sml)<<endl;
    }
