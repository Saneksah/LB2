#include <iostream>
using namespace std;

bool isStrobogrammatic(string a){
    bool rez = 1;
    for (int i=0; i<a.length(); ++i){
        if (a[i]=='0'){
            if (a[a.length()-i-1]!='0'){
                rez = 0;
                break;
            }
        }
        else if (a[i]=='1'){
            if (a[a.length()-1-i]!='1'){
                rez = 0;
                break;
            }
        }
        else if (a[i]=='6'){
            if (a[a.length()-1-i]!='9'){
                rez = 0;
                break;
            }
        }
        else if (a[i]=='8'){
            if (a[a.length()-1-i]!='8'){
                rez = 0;
                break;
            }
        }
        else if (a[i]=='9'){
            if (a[a.length()-1-i]!='6'){
                rez = 0;
                break;
            }
        }
        else {
            rez = 0;
            break;
        };
    };
    return rez;
}

int main(){
    string a;
    cin >> a;
    if (isStrobogrammatic(a)==1)
        cout << "True";
    else
        cout << "False";
    return 0;
}
