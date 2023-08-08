#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int main()
{
    ll n;
    cin >> n;

    vl v;
    ll i, x;
    rep(i, 0, n-1)
    {
        cin >> x;
        v.pb(x);
    }

    sort(all(v));

    ll gc = v[0];
    rep(i, 1, n-1)
    {
        gc = gcd(gc, v[i]);
    }

    cout << (n * gc) << endl;



    return 0;
}

