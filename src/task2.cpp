#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += abs(a[i] - (i + 1));
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