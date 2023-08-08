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
#define intMX           __builtin_infd32()


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
        ll n , m;
        cin >> n >> m;

        ll x;
        ll mn = intMX;
        ll mx = 0;

        for(ll i = 0; i < n ; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                cin >> x;
                mn = min(mn , x);
            }
            mx = max(mx , mn);
            mn = intMX;
        }

        cout << mx << endl;



    }
    return 0;
}


