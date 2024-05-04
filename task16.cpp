#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int time = 1;
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
        cin >> a[i][j];
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            time = time * a[i][j];
    if((time >= 100 && time < 1000)||(time <= -100 && time > 1000))
        cout << "YES";
    else
        cout << "NO";

}

