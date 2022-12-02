#include <iostream>
using namespace std;

int main()
{
    long long t, n, x;
    cin >> t;
    bool res[t];
    for (int i = 0; i < t; i++) {
        cin >> n;
        x = n;
        res[i] = false;
        if (n%2 != 0) {
            res[i] = true;
        }
        while (x > 1) {
            x /= 2;
            if (n%x == 0 && x%2 != 0 && x > 1) {
                res[i] = true;
                break;
            }
            
        } 
    }
    for (int i = 0; i < t; i++) {
        if (res[i]) {
            cout << "YES" << endl;
            continue;
        } 
        cout << "NO" << endl;
    }
}