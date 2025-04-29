#include <bits/stdc++.h>
#define PI 3.14159265358979323846

using namespace std;

int main() {
    double x;
    cin >> x;

    if (x - (int)x != 0) {
        cout << "float ";
        cout << (int)x << ' ' << (x - (int)x) << endl;
    } else {
        cout << "int ";
        cout << (int)x << endl;
    }

    
    return 0;
}