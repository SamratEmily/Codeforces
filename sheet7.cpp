#include<bits/stdc++.h>

using namespace std;

void fun(int n) {
    if(n == 0) return;
    cout << n << ' ';
    n--;
}
int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;

        fun(n);
        cout << endl;
    }

    return 0;
}