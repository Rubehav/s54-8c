#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int first = 0;
    int second = 1;
    int next = first + second;
    int p = 2;
    while(next <= n){
        if(next == n){
            cout << p;
            return 0;

        }
        first = second;
        second = next;
        next = first + second;
        p++;

    }
    cout << -1 << endl;
    return 0;
}
