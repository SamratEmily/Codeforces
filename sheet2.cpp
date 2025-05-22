#include <iostream>
    
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long cntOne = 0;
        while (n > 0)
        {
            if(n % 2 == 1) cntOne++;
            n /= 2;
        }

        long long result = 0;
        for(long long i = 0; i < cntOne; i++) {
            result = (result << 1) | 1;
        }
        cout << result << endl;
    }
        
    return 0;
}