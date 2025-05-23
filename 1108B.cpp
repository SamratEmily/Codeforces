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

        ll ar[n+2];

        ll mx = 0;
        for(ll i = 0; i < n ; i++)
        {
            cin >> ar[i];
        }


        sort(ar , ar+n);
        ll ans = 0;
        for(ll i = n-1; i >= 0 ; i--)
        {
            if(ar[n-1]%ar[i] != 0)
            {
                ans = ar[i];
                break;
            }
            else if(ar[i] == ar[i-1])
            {
                ans = ar[i];
                break;
            }
        }

        cout << ar[n-1] << ' '  << ans << endl;



    }
    return 0;
}


