#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define scln(x)         scanf("%lld",&(x))
#define pll             pair < ll, ll>
#define MP              make_pair
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
        ll n;
        cin >> n;

        map<ll, ll > m;
        vector< pll > p;
        ll x;
        vl v;
        for(ll i = 0; i < n; i++)
        {
            cin >> x;

            m[x]++;

            p.pb(MP(x , i+1));

        }

        sort(all(p));

        ll f = 1;
        for(ll i = 0; i < n ; i++)
        {
            ll u = p[i].first;

            if(m[u] == 1)
            {
                f  = 0;
                cout << p[i].second << endl;
                break;
            }
        }
        if(f) cout << -1 << endl;

        m.clear();
        p.clear();


    }
    return 0;
}


