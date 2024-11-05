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
        ll n , c0 , c1 , h;
        cin >> n >> c0 >> c1 >> h;

        string s;
        cin >> s;

        ll fr[3];
        mSet(fr , 0);

        for(ll i = 0; i < n ; i++)
        {
            if(s[i] == '0') fr[0]++;
            else fr[1]++;
        }

        ll ans = (fr[0]*c0) + (fr[1]*c1);
        if(c0 == c1)
        {
            ans = ans;
        }
        else if(c0 < c1)
        {
            ll t = (fr[1]*h) + (fr[1]+fr[0])*c0;

            if(ans > t) ans = t;
        }
        else
        {
            ll t = (fr[0]*h) + (fr[1]+fr[0])*c1;

            if(ans > t) ans = t;
        }

        cout << ans << endl;



    }
    return 0;
}

