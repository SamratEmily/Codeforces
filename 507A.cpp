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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n , k;
        cin >> n >> k;

        vector<pll> v;

        ll x;
        for(ll i = 0; i < n ; i++)
        {
            cin >> x;
            v.pb(make_pair(x , i+1));
        }
        sort(all(v));

        vl ans;
        ll temp = 0;

        for(ll i = 0; i < n ; i++)
        {
            temp += (v[i].first);
            if(temp > k)
                break;
            ans.pb(v[i].second);
        }

        sort(all(ans));

        cout << ans.size() << endl;

        for(ll i = 0; i < ans.size() ; i++) cout << ans[i] << ' ';
        cout << endl;

    }
    return 0;
}


