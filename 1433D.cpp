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
#define ff first
#define ss second

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

        vector< pair<ll,ll> > v(n);

        //map<ll,ll> m;
        for(ll  i = 0; i < n ; i++)
        {
            cin >> v[i].ff;

            v[i].ss = (i+1);

        }


        sort(all(v));

        if(v[0].ff == v[n-1].ff)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        ll num, in = 0;
        for(ll i = 0; i < n; i++)
        {
            if(v[0].ff!=v[i].ff)
            {
                cout << v[0].ss << ' ' <<  (v[i].ss) << endl;
            }
        }
        for(ll i = 1; i < n ; i++)
        {
            if(v[i].ff == v[0].ff)
            {
                cout << v[i].ss << " " << v[n-1].ss << endl;
            }
        }

    }
    return 0;
}


