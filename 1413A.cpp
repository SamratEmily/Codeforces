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

        vl v;
        for(ll i = 0; i < n ; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }

        vl ans;
        for(ll i = 0; i < n/2 ; i++)
        {
            ans.pb(-1 * v[n-i-1]);
        }
        for(ll i = n/2-1; i >= 0; i--)
             ans.pb(v[i]);

        for(ll i = 0; i < n ; i++)
            cout << ans[i] << " \n"[i == n-1];


    }
    return 0;
}


