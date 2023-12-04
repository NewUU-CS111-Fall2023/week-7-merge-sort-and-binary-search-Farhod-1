#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k) {
    map<int, int> m;
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.second > b.second;
    });
    for (int i = 0; i < k; i++) {
        res.push_back(v[i].first);
    }
    return res;
}

int main() {
    int n, k;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    vector<int> res = topKFrequent(a, k);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}