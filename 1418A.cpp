#include<bits/stdc++.h>

#define lll              long long int
#define ll             unsigned long long int
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

ll CL(ll a, ll b)
{
    return (a + b - 1) / b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    while(tc--)
    {

        ll x, y, k;
        cin >> x >> y >> k;

        ll trd = 0;

        ll tot = (k * y) + k - 1;

        ll ans = CL(tot , (x-1)*1.0) + k;

        cout << ans << endl;


    }
    return 0;
}


