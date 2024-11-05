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

        vector< ll > v;

        ll x;
        ll sum = 0;
        for(ll i = 0; i < n ; i++)
        {
            cin >> x;
            v.pb(x);
        }

        vl ans;
        for(ll i = 0; i < n ; i += 2)
        {
            ans.pb(v[i+1]);
            ans.pb(-1 * v[i]);
        }


        for(ll i = 0; i < n ; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;



    }
    return 0;
}


