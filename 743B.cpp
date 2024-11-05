#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n, k;
        cin >> n >> k;

        ll num = k ^ ( k & (k-1LL)) ;

        ll res = -1, i = 0;
        for(ll i = 0 ; i <= 50 ; i++)
        {
            if( (1 << i) == k)
            {
                res = i+1;
                break;
            }
        }
        cout << res << endl;

        // cout <<  __builtin_ctzll(k) + 1 << endl;

    }

    return 0;
}
