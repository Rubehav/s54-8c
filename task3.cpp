#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, p = 1;
    while(n != 0){
        sum += n%10;
        p *= n%10;
        n /= 10;
    }
    cout << sum << " " << p;

}

