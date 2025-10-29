#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
const vector<int> primes = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97
};

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
    
        bool f = false;
        for (long long i = 0; i < primes.size(); ++i) {
            for (long long j = 0 ; j < a.size(); ++j) {
                if (a[j] % primes[i] != 0) {
                    cout << primes[i] << "\n";
                    f = true;
                    break; 
                }
            }
            if (f) break;
        }

        if (!f) cout << -1 << "\n";

    }

    return 0;
}