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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        ll ans = 1;

        for(ll i = 1; i <= n; i++)
        {
            ans *= i;
        }
        ll t1 = (n / 2);
        ll t2 = (n-1);
        ll t = ((t2 * (t2+1))/2) + t1;

        cout << (ans / t) << endl;


    }
    return 0;
}


