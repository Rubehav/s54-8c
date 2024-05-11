#include <iostream>
#include <cmath>

using namespace std;
int isprime(int a)
{
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;


}


int main()
{
    int n;
    cin >> n;
    isprime(n);
    return 0;
}

