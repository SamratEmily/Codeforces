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
        string st;
        cin >> n >> st;

        ll f = 0, b = 0;

        ll i ;
        rep(i, 0, n-1)
        {
            if(st[i] == '(')
            {
                f++;
            }
            else
            {
                if(f == 0)
                    b++;
                else
                    f--;
            }
        }
        ll res = (f + b) / 2;

        cout << res << endl;


    }

    return 0;
}


