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
    // cin >> T;
    RUN_CASE(t,T)
    {
        ll n ;
        cin >> n;

        ll i, x;
        ll one = 0, zero = 0;
        rep(i, 0, n-1)
        {
            cin >> x;
            if(x == 0)
                zero++;
            else
                one++;
        }

        if(n == 1 && zero == 1)
            cout << "NO" << endl;
        else if(n == 1 && one == 1)
            cout << "YES\n";
        else if(n >= 2 && zero == 1)
            cout << "YES\n";
        else
            cout << "NO" << endl;

    }

    return 0;
}


