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
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))


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

        ll res = 0;

        vl v(n);

        for(ll i = 0; i < n ; i++)
        {
            cin >> v[i];
        }

        sort(all(v));

        vector<ll> ans;

        for(ll i = 0; i < n ; i++)
        {
            for(ll j = i+1; j < n ; j++)
            {
                ll t = abs(v[j] - v[i]);

                ans.pb(t);
            }
        }

        SORT_UNIQUE(ans);
        cout << ans.size() << endl;
    }
    return 0;
}


