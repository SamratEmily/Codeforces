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
        ll n;
        cin >> n;

        vl v1(n) , v2(n);
        vector<pll> x , y;

        for(ll i = 0 ; i < n ; i++) cin >> v1[i];


        for(ll i = 0 ; i < n ; i++){
                cin >> v2[i];

                x.pb(MP(v1[i] ,v2[i]));
                y.pb(MP(v2[i] ,v1[i]));
        }

        sort(all(x));
        sort(all(y));

        ll mx = 0;




    }
    return 0;
}


