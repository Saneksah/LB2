#include "iostream"
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i*=4) {
        if (i == n) {
            cout << "True";
            ++m;
            break;
        }
    }
    if (m == 0) {
        cout << "False";
    }
}

