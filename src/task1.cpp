#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        int i = 0;
        while (i < n - 2) {
            sum -= a[i];
            i += 2;
        }
        cout << sum << endl;
    }
    return 0;
}

