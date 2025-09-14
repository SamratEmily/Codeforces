#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;

        long long a, b, cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a <= x) {
                cnt1++;
            }
        }
        for(int i = 0; i < m; i++) {
            cin >> b;
            if(b <= y) {
                cnt2++;
            }
        }

        cout << (n + m) << endl;
    }

    return 0;
}