#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];

        int vol = arr[0];

        for(int i = 1; i<n; i++){
            int dif = (arr[i] - arr[i-1]);
            if( dif > vol) vol = dif;
        }

        int dif = 2*(x-arr[n-1]);
        if(dif > vol) vol = dif;

        cout<<vol<<endl;
    }

}