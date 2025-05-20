#include <iostream>
#include <cmath>

using namespace std;

void makeSquare(int n, int ar[]) {
    for (int i = 1; i <= n; i++)
    {
        ar[i] = i*i;
    }
}

int main() {
    int n;
    cin >> n;
    int ar[n+1];
    
    makeSquare(n, ar);

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            int sum = ar[i]+ar[j];
            int ok = sqrt(sum);

            if(ok*ok == sum and ok <= n) {
                ans++;
            }

            if(ok > n) break;
        }
    }
    
    cout << ans << endl;
    return 0;
}