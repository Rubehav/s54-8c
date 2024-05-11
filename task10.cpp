#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c;
    for(int a = 1 ; a <= n/3; a++){
        for(int b = 1; b <= (n-a)/2; b++){
            c = n - b - a;
            if(c >= b && b >= a){
                cout << a <<" " <<  b << " " << c << endl;
            }
        }
    }
}
