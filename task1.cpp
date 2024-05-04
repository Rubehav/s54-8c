#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, d;
    a = n%10;
    b = n/10%10;
    c = n/100%10;
    d = n/1000;
    int min = 2;
    if(min > a && a%2 == 1)
        min = a;
    if(min > b && b%2 == 1)
        min = b;
    if(min > c && c%2 == 1)
        min = c;
    if(min > d && d%2 == 1)
        min = d;
    if(min%2 == 1)
        cout << min;
    else
        return 0;


}

