#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        if(a[i] >= 0){
            if(a[i] % 10 != d){
                cout << a[i] << " ";
            }
        }
        else{
            if(a[i] % 10 != d * -1){
                cout << a[i] << " ";
            }
        }
}

