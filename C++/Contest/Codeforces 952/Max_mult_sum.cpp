#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int maxSum = 0;
        int ans = 0;

        for (int j = 2; j <= n; j++) {
            int sum = 0;
            int mul = j;
            while (mul <= n) {
                sum += mul;
                mul += j;
            }
            if (sum > maxSum) {
                maxSum = sum;
                ans = j;
            }
        }

        cout << ans << endl;
    }

    return 0;
}