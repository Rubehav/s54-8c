#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    char start = str[a];
    for(int i = a; i < b;i++){
        str[i] = str[i+1];
    }
    str[b] = start;
    cout << str;
}

