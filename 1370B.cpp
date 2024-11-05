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

        vl v;
        ll i , x;
        n *= 2;
        rep(i , 0 , n-1)
        {
            cin >> x;
            v.pb(x);
        }
        ll j , cnt = 0;
        rep(i , 0 , n-1)
        {
            rep(j , 0 , n-1) if(gcd(v[i],v[j]) == 1){v[i] = 0 , v[j] = 0 , break; }
        }

        rep(i , 0 , n-1)
        {
            rep(j , 0 , n-1)
            {
                if(j != i && v[i] > 0 && v[j] > 0)
                {
                    if(gcd(v[i], v[j]) > 1 )
                    {
                        if(i > j) cout << (j+1) << ' ' << (i+1) << endl;
                        else cout << (i+1) << ' ' << (j+1) << endl;

                        v[i] = 0;
                        v[j] = 0;
                    }
                    else
                    {
                        cout << ()
                    }
                }
            }
        }
    }
    return 0;
}


