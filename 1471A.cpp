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
    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n , x;
        cin >> n >> x;

        ll sum = 0;
        ll mxs = 0 , mns = 0;
        for(ll i = 0; i < n ; i++)
        {
            ll a;
            cin >> a;
            sum += a;

            mxs += ceil(a/(x*1.0));
        }
        mns = ceil(sum / (x*1.0));

        cout << mns << ' ' << mxs << endl;

    }
    return 0;
}

