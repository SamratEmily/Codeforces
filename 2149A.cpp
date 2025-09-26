#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int ans = 0;
        int neg = 0;
        int min_neg = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if(a[i] == 0) {
               ans++;
            } else if (a[i] < 0) {
                neg++;
                min_neg = min(min_neg, abs(a[i]));
            }
        }
        if(neg % 2 == 0) {
            cout << (ans) << endl;
        }
        else {
            cout << (ans+min_neg+1) << endl;
        }
    }
    return 0;
}