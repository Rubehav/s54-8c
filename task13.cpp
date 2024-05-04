#include <iostream>
using namespace std;
int main() {
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;

    int s[1000];
    for (int i = 0; i < N; ++i) {
        s[i] = i + 1;
    }

    for (int i = A - 1, j = B - 1; i < j; ++i, --j) {
        int t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    for (int i = C - 1, j = D - 1; i < j; ++i, --j) {
        int t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    for (int i = 0; i < N; ++i) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}

