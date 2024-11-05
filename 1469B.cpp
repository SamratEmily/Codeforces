#include<bits/stdc++.h>

#define ll              long long int

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        ll a1[n+2];
        ll mx1 = 0;
        for(ll i = 0;  i < n ; i++)
        {
            cin >> a1[i];
            if(i > 0)
                a1[i]+= a1[i-1];

            mx1 = max(mx1, a1[i]);
        }

        ll m;
        cin >> m;

        ll a2[m+2];
        ll mx2 = 0;
        for(ll i = 0;  i < m ; i++)
        {
            cin >> a2[i];

            if(i > 0)
                a2[i] += a2[i-1];

            mx2 = max(mx2, a2[i]);
        }

        cout << (mx1+mx2) << endl;
    }
    return 0;
}


