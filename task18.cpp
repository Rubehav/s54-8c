#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, m, r, l;
    cout << "input n (# of lines) and m (# of columns) separated by space" << endl;
    cin >> n >> m;
    cout << "input array "  << n << " lines " << m << " columns"<< endl;
    long long a[n][m]; //n строк и m столбцов
    for(int i = 0; i< n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "\nCheck that it is your input below" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << '\t';
        }
        cout<<'\n';
    }

    cout << "input L and R separated by space" << endl;
    cin >> l >> r;

    cout << "\nthis is your array without the lines with all the values between L and R" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] < l || a[i][j] > r){
                for(int j = 0; j < m; j++)
                    cout << a[i][j] << '\t';
                cout << endl;
                break;
            }
        }
    }
}
