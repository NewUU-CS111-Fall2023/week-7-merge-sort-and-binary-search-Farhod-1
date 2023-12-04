//Implement recursivePow(x, n), which calculates x raised to the power n (i.e., xn).

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

long long recursivePow(long long x, long long n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return recursivePow(x * x, n / 2);
    } else {
        return x * recursivePow(x * x, n / 2);
    }
}

int main() {
    cout << recursivePow(2, 10) << endl;
    return 0;
}