
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n * n);
    int sum = 0;
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[k - 1] << endl;
    return 0;
}

