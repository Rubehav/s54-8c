#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int x = 0; x < 1001; x++)
        if((x*x*x*a + x*x*b + x*c + d)==0)
            cout << x;
}
