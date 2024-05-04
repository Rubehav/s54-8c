#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0.0 ;
    int a;
    for(int i = 1; i<n; i++)
        a = i*i;
        sum += 1.0 /a;
    cout << fixed << setprecision(6) << sum;
}
