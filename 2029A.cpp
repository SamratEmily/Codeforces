#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        // int s = l, e = r;
        // while (l < r)
        // {
        //     int mid = (l + r + 1) / 2;
        //     int op = e / mid;

        //     if (op >= k)
        //         l = mid;
        //     else
        //         r = mid - 1;
        // }

        int ans = (r / k) - l + 1;
        if (ans <= 0)
        {
            cout << 0 << endl;
        }
        else
            cout << ans << endl;
    }

    return 0;
}