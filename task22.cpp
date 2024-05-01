#include <cmath>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char c;
    string s;
    getline(cin,s);
    c = '.';
    for(int i = 0; i < s.size(); i++){
        if(s[i] != c){
           cout << s[i];
        }
        else{
            if(i + 1 > s.size()){
                cout << "...";
            }
            else{
                if(s[i + 1] != c){
                    cout << "...";
                }
            }
        }
    }

    }
