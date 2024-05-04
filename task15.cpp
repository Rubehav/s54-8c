#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;

    int m[100][100];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < M; ++i) {
        int min = m[0][i];
        for (int j = 1; j < N; ++j) {
            if (m[j][i] < min) {
                min = m[j][i];
            }
        }
        cout << min << " ";
    }
    cout << endl;

    return 0;
}

