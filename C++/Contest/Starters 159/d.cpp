#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;


long long mod_inverse(long long q, long long mod) {
    long long res = 1;
    long long power = mod - 2;
    while (power) {
        if (power % 2 == 1)
            res = (res * q) % mod;
        q = (q * q) % mod;
        power /= 2;
    }
    return res;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	
	while(t--){
        
        long long n, d;
        cin>>n>>d;
        
        vector<long long> st(n);
        // long long sum = 0;
        // for(int i = 0; i<n; i++){
        //     cin>>st[i];
        //     sum += st[i];
        // }
        
    // 1e9 + 7
    //cout<<sum<<endl;
        long long P = d+1;
        long long Q = 2*d;
        long long Q_inv = mod_inverse(Q, MOD);
        long long result = (P * Q_inv) % MOD;
        cout<<result<<endl;
	}

}
