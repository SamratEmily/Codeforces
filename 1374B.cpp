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


        ll res = 0;

        while(n != 1)
        {
            if(n % 6 == 0)
                n /= 6;
            else
                n *= 2;
            res++;

            if(n > 100000000000000000)
            {
                res = -1;
                break;
            }
            }
        }

        cout << res << endl;

    }

    return 0;
}


