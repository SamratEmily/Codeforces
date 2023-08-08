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
        ll n , m;
        cin >> n >> m;

        ll ans = 0;

        for(ll i = n ; i <= m ; i++)
        {
            ll rem = 0;
            ll num = i;
            while(num)
            {
                rem = (num % 10);
                num /= 10;

                if(rem == 0) ans += 6;
                else if(rem == 1) ans += 2;
                else if(rem == 2) ans += 5;
                else if(rem == 3) ans += 5;
                else if(rem == 4) ans += 4;
                else if(rem == 5) ans += 5;
                else if(rem == 6) ans += 6;
                else if(rem == 7) ans += 3;
                else if(rem == 8) ans += 7;
                else ans += 6;
            }
        }

        cout << ans << endl;

    }
    return 0;
}


