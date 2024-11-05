#include<bits/stdc++.h>
#include<vector>

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

        vl v1;
        vector< vector<ll> > v(100005);

        int ar[n+2];

        for(ll i = 0; i < n ; i++)
            cin >> ar[i];

        ll mx = ar[0];
        v[mx].pb(ar[0]);
        v1.pb(ar[0]);
        for(ll i = 1; i < n ; i++)
        {
            if(mx < ar[i])
            {
                mx = ar[i];
                v1.pb(mx);
            }
            v[mx].pb(ar[i]);
        }

        sort(all(v1));
        for(int i = v1.size()-1; i >= 0 ; i--)
        {
            for(int j = 0; j < v[v1[i]].size(); j++)
            {
                cout << v[v1[i]][j] << ' ';
            }
        }
        cout << endl;



    }
    return 0;
}


