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
    cin >> tc;

    while(tc--)
    {
        ll n, k;
        cin >> n >> k;

        ll len = n*k;

        ll ar[len + 2];

        for(ll i = 0; i < len ; i++)
            cin >> ar[i];

        ll sum = 0;


        if(n % 2)
        {
            ll t = (n+1) / 2;
            for(ll i = len - t; i >= ((n-t)*k) ; i -=  t)
            {
                sum += ar[i];
            }
        }
        else
        {
            ll t2 = (n + 2) / 2;

            for(ll i = len - t2 ; i >= ((n-t2)*k) ; i -= (t2))
                sum += ar[i];
        }


        cout << sum << endl;

    }
    return 0;
}


