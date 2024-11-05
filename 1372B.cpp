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
    cin >> T;
    RUN_CASE(t,T)
    {
        ll n;
        cin >> n;

        if(n == 2)
        {
            cout << "1 1\n";
            continue;
        }

        vl v;
        ll i ;

        rep(i, 1, sqrt(n)+1)
        {
            if(n % i == 0)
            {
                v.push_back(i);
                ll tmp = n / i;
                if(tmp != i)
                v.pb(tmp);
            }
        }
        sort(all(v));
        if(n % 2 == 0)
            cout << v[v.size()-2] << ' ' << (n - v[v.size()-2]) << endl;
        else
            cout << v[v.size()-2] << ' ' << (n - v[v.size()-2]) << endl;

    }

    return 0;
}


