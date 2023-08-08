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
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)


using namespace std;


int main()
{
    ll t, T;
    T = 1;
    //cin >> T;
    RUN_CASE(t,T)
    {
        ll n;
        cin >> n;
        vl v;
        v.pb(-123456789101112);
        ll i , x;
        ll mx = -1234567890,mn = 1234567890;
        rep(i , 1 , n)
        {
            cin >> x;
            v.pb(x);
            mx = max(mx, x);
            mn = min(mn , x);
        }
        v.pb(123456789101112);
        ll mnn = 0, mxx = 0;
        rep(i , 1 , n)
        {
            mnn = min(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
            mxx = max(abs(v[i]-mx),abs(v[i]-mn));

            cout << mnn << ' ' << mxx << endl;
        }

    }

    return 0;
}


