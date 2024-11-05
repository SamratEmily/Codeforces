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

ll POW(ll a, ll p)
{
    ll res = 1;
    for(ll i = 0 ; i < p ; i++)
    {
        res = (res * a) % MOD;
    }
    return res;
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
        ll s, c;
        cin >> c >> s;

        if(s <= c)
        {
            cout << s << endl;
            continue;
        }

        ll rem = s % c;
        ll num = s / c;
        ll t = rem* (num+1);

        ll ans = rem * POW(num+1 , 2) + (c - rem) * POW(num , 2);

        cout << ans << endl;


    }
    return 0;
}


