#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, m;
    cout << "input n (# of lines) and m (# of columns) separated by space" << endl;
    cin >> n >> m;
    long long a[n][m]; //n строк и m столбцов
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(i == 0 || j == 0)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j] + a[i][j - 1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << '\t';
        }
        cout<<'\n';
    }
}

