#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf


using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        vl v;
        ll x;
        for(ll i = 0; i < n ; i++)
        {
            cin >> x;
            v.pb(x);
        }

        sort(all(v));

        vl v2;
        ll in = 0;
        ll cn = 0;
        for(ll i = n/2 ; i < n ; i++)
        {
            if(v[0] < v[i])
            {
                in = i+1;
                v2.pb(v[i]);
                v2.pb(v[cn++]);
            }
        }

        for(ll i = in ; i < n ;i++)
        {
            v2.pb(v[i]);
            v2.pb(v[cn++]);
        }

        for(ll i = cn ; i < in-1; i++) v2.pb(v[i]);

        ll cnt = 0;
        for(ll i = 1; i < n-1 ; i++)
            if(v2[i] < v2[i-1] && v2[i] < v2 [i+1]) cnt++;

        cout << cnt << endl;

        for(ll i = 0; i < n ; i++) cout << v2[i] << ' ';
        cout << endl;
    }
    return 0;
}



