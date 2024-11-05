
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


ll mo = 0;
ll make(ll n)
{
    if(n == 1)
        return mo;
    ll f = 0;
    for(ll i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            f = 1;
            ll t = (n / i);
            n /= t;
            break;
        }
    }
    if(f)
    {
        mo++;
        return make(n);
    }
    else
    {
        mo++;
        n--;

        return make(n);
    }

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
        ll n;
        cin >> n;

        mo = 0;

        cout <<  make(n) << endl;

    }
    return 0;
}

