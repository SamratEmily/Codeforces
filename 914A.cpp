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
#define Vin(v)          for(auto &it: v)cin>>it;


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

        vl v(n);
        ll x;

        Vin(v);

        sort(all(v));
        ll ans = 0;
        for(ll i = n-1; i >= 0; i--)
        {
            ll t = sqrt(abs(v[i]));

            if((t*t) < (v[i]) || (v[i] < 0))
            {
                ans = v[i];
                break;
            }
        }

        cout << ans << endl;

    }
    return 0;
}


