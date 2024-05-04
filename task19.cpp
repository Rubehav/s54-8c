#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int a[n][n];
    int ksk[n];
    for(int i = 0; i < n; i++){
        for(int g = 0; g < n; g++){
        cin >> a[i][g];
        }
    }
    for(int i = 0; i < n; i++){
        cin >> ksk[i];
    }
    for(int i = 0; i < n; i++){
        for(int g = 0; g < n; g++){
        if(g % 2 == 0){
            cout << a[i][g] << " ";
        }else{
            cout << ksk[i] << " ";
        }
    }
    cout << endl;
    }
    return 0;
}

