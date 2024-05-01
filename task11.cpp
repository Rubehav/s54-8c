#include <iostream>
#include <cmath>

using namespace std;
bool isprime(int a)
{
    if(a == 2)
        return true;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;


}
int main()
{
        int n;
    cin >> n;
    int i = n + 1;
    while(true){
        if(isprime(i)){
            cout << i;
            break;
        }
        else{
            i++;
        }
    }

}

