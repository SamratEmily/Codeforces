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

bool fun(ll n, ll d)
{
    if(n%d == 0) return true;

    ll f = 0;
    while(n)
    {
        if((n%10) == d)
        {
            f = 1;
            break;
        }
        n /= 10;

    }
    if(f) return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n , d;
        cin >> n >> d;

        ll t = ceil(d / 2.0);
        for(ll i = 0; i < n ; i++)
        {
            ll x;
            cin >> x;

            if(x < d)
            {
                cout << "NO\n";
                continue;
            }

            ll f = 0;

            while(x >= d)
            {
                f = fun(x , d);
                if(f) break;
                x -= d;
            }

            if(f) cout << "YES\n";
            else cout << "NO\n";
        }


    }
    return 0;
}


