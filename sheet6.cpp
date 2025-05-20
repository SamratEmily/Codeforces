#include<bits/stdc++.h>

using namespace std;

void printToN(int n) {
    for (int i = 1; i < n; i++)
    {
        cout << i << ' ';
    }
    cout << n << endl;
}

int main() {
    int x, y;
    cin >> x;

    printToN(x);

    return 0;
}