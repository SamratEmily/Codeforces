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

    ll tc = 1;
    scanf("%lld", &tc);
    while(tc--)
    {
        ll n;
        ll x, y;
        scanf("%lld",&n);
        scanf("%lld",&x);
        scanf("%lld",&y);

        //        cin >> n >> x >> y;
        if(n >= y )
        {
            for(ll i = 1 ; i <= n ; i++)
                pf("%lld ", i);

            pf("\n");


        }
        else
        {

            ll dif = y - x;
            ll add = 0;
            for(ll i = 1 ; i <= dif ; i++)
            {
                if(dif%i == 0)
                {
                    ll t = dif / i + 1;
                    if(t <= n)
                    {
                        add = i;
                        break;
                    }
                }
            }

            ll num = x;
            ll cnt = 0;
            while(num <= y )
            {
                cnt++;
                pf("%lld ", num);
                num += add;
            }
            num = x;
            while(num-add >= 1 && cnt < n )
            {
                cnt++;
                num -= add;
                pf("%lld ", num );
            }
            num = y;
            for(ll i = cnt+1 ; i <= n ; i++)
            {
                num += add;
                pf("%lld ", num);

            }
            pf("\n");
        }

    }
    return 0;
}




