#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n+1];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
        if(ar[i] <= 10) {
            cout << "A[" << i << "] = " << ar[i] << endl;
        }
    }
    return 0;
}