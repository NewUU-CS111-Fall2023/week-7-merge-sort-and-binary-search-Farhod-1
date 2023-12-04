#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
        int A[N], B[M];
        for (int j = 0; j < N; j++) {
            cin >> A[j];
        }
        for (int j = 0; j < M; j++) {
            cin >> B[j];
        }

        int C[N + M];
        int a = 0, b = 0;
        for (int j = 0; j < N + M; j++) {
            if (a == N) {
                C[j] = B[b];
                b++;
            } else if (b == M) {
                C[j] = A[a];
                a++;
            } else if (A[a] > B[b]) {
                C[j] = A[a];
                a++;
            } else {
                C[j] = B[b];
                b++;
            }
        }

        for (int j = 0; j < N + M; j++) {
            cout << C[j] << " ";
        }
        cout << endl;
    }
    return 0;
}