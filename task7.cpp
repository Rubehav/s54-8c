#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int i = 1;
    int z = 1;
    int j = 1;
    while(i <= t && z <= t && j <= t){
        j = 1;
        while(z <= t && j <= i){
            cout << i << " ";
            j++;
            z++;

        }
        i++;
    }
}
