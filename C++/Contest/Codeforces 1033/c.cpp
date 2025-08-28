#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        ll n, m;
        cin >> n >> m;
        ll nsum = n*(n+1)/2;
        if(m < n || m > nsum) {
            cout << -1 << endl;
            continue;
        }
        vector<ll> used(n+1, 0);
        ll left = n-1;
        vector<ll> ans;
        for(int i=n; i>=1; i--) {
            if(m - left >= i) {
                used[i] = 1;
                m -= i;
                left--;
                ans.push_back(i);
            }
        }
        for(int i=1; i<=n; i++) {
            if(!used[i]) {
                ans.push_back(i);
            }
        }
        cout << ans[0] << endl;
        for(int i=0; i<ans.size()-1; i++) {
            cout << ans[i] << " " << ans[i+1] << endl;
        }
    }
}