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

        ll ar[n+2];
        ll pos = 0, neg = 0;
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> ar[i];
        }

        for(ll i = n-1 ; i >= 0 ; i--)
        {
            if(ar[i] < 0)
            {
                neg += abs(ar[i]);
            }
            else
            {
                if(ar[i] >= neg)
                    neg = 0;
                else
                    neg -= ar[i];
            }
        }

        cout << neg << endl;

    }
    return 0;
}


