#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];

        sort(arr.begin(), arr.end());

        vector<int> temp1 = arr;
        vector<int> temp2 = arr;

        int cnt_min = 0;
        int i = 0;
        while((temp1[i] + temp1[n-1]) % 2 != 0){
            cnt_min++;
            i++;
        }

        int cnt_max = 0;
        i = 0;
        while((temp2[0] + temp2[n-i-1]) % 2 != 0){
            cnt_max++;
            i++;
        }

        if(cnt_min > 0 && cnt_max > 0) cout<<min(cnt_min, cnt_max)<<endl;
        else if(cnt_min > 0) cout<<cnt_min<<endl;
        else cout<<cnt_max<<endl;
    }
}