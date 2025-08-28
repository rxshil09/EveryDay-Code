#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long sum = 0, a1 = 0;  

        if (n == 2) {
            a1 = arr[0];
        } else {
            for (int i = 1; i < n - 1; i++) {
                a1 = max(a1, static_cast<long long>(max(arr[i], arr[i - 1])));
            }
        }

        sum = a1 + static_cast<long long>(arr[n - 1]);
        cout << sum << endl;
    }

    return 0;
}
