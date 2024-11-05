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
        ll n;
        cin >> n;

        vector<pll> v;
        ll ar[n+2 ];

        ll odd = 0, even = 0;
        for(ll i = 0; i < n ; i++)
        {
            cin >> ar[i];
        }

        ll sum = 0;

        for(ll i = n-1; i >= 0 ; i--)
        {
            if( ar[i] & 1)
                odd++;
            else
                even++;

            v.pb(make_pair(odd, even));

            if(odd >= 2 && even >= 2 && odd != even)
            {
                sum ++;
            }
        }
        cout << sum << endl;

    }
    return 0;
}


