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
        ll n,k;
        cin >> n >> k;

        ll sum = 0;
        ll x;
        ll in;
        cin >> in;
        for(ll i = 1; i < n ; i++)
        {
            cin >> x;
            ll y = x * 100;
            y = ceil((y - in)/(k*1.0));
            if(y > 0)
            {
                sum += y;
               // cout << x << ' ';
            }
            in += x;
        }
        cout << sum << endl;


    }
    return 0;
}


