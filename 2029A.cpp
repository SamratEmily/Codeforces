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
        int s = l, e = r;
        while (l < r)
        {
            int mid = (l + r + 1) / 2;
            int op = e / mid;

            if (op >= k)
                l = mid;
            else
                r = mid - 1;
        }
        if (l - s == 0)
        {
            if (e / l >= k)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << (l - s + 1) << endl;
    }

    return 0;
}