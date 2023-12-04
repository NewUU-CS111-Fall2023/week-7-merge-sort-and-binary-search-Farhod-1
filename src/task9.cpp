#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
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
    return 0;
}