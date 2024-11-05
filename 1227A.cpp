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
#define mp              make_pair


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

        vector< pll > v , v2;
        ll a, b;
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> a >> b;

            v.pb(mp(a , b));
            v2.pb(mp(b , a));
        }
        sort(all(v));
        sort(all(v2));

        ll ans = v[n-1].first - v2[0].first ;

        if(ans <= 0) cout << 0 << endl;
        else
        cout << ans << endl;



    }
    return 0;
}

/*
9
14 23
25 77
1 83
8 22
8 35
46 92
15 89
5 66
64 86
*/


