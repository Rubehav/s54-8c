#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
            for(int g = i; g < n; g++){
                if(a[g] == a[g+1]){
                    cout << "YES";
                    return 0;
                }
            }
            if(i == n - 1 && a[i] != a[i + 1]){
                cout << "NO";
            }
    }
}

