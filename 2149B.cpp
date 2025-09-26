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
        
        for (int  i = 0; i < n; i++)
        {
           cin >> a[i];
        }

        sort(a.begin(), a.end());
        int dif = 0;
        for(int i = 1; i < n; i+=2) {
            dif = max(dif, abs(a[i] - a[i-1]));
        }
        cout << dif << endl;
    }

    return 0;
}