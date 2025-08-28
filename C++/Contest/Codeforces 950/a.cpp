#include<bits/stdc++.h>
using namespace std;

string solve(int n, int f, int k, vector<int>& a) {
    int favValue = a[f - 1];
    sort(a.begin(), a.end(), greater<int>());

    int countInFirstK = 0;
    int countAfterK = 0;

    // Count occurrences of favoriteValue in the first k elements
    for (int i = 0; i < k; ++i) {
        if (a[i] == favValue) {
            ++countInFirstK;
        }
    }

    // Count occurrences of favoriteValue in elements after the first k
    for (int i = k; i < n; ++i) {
        if (a[i] == favValue) {
            ++countAfterK;
        }
    }

    if (countInFirstK > 0 && countAfterK == 0) {
        return "YES";
    } else if (countInFirstK == 0 && countAfterK > 0) {
        return "NO";
    } else {
        return "MAYBE";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << solve(n, f, k, a) << endl;
    }

    return 0;
}
