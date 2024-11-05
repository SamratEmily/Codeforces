#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define gcd(a,b)        __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)


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
        ll n, m;
        cin >> m >> n;

        ll a1[m+2], a2[n+2];

        for(ll i = 0; i < m ; i++)
            cin >> a1[i];
        for(ll i = 0; i < n ; i++)
            cin >> a2[i];

        ll l = min(m, n);

        ll res = 0;
        for(ll i = 0 ; i < m ; i++)
        {
            for(ll j = 0 ; j < n ; j++)
                if(a1[i] == a2[j])
                {
                    res = a1[i];
                    break;
                }

            if(res > 0)
                break;
        }
        if(res == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << 1 << ' ' << res << endl;
        }


    }
    return 0;
}


