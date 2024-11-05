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
        ll n, a, b;
        cin >> a >> b;

        string st;
        cin >> st;
        st += '0';

        ll len = st.size();

        ll one = 0, zero = 0, on = 0;
        vl z, o;
        for(ll i = 0; i < len ; i++)
        {
            if(st[i] == '1')
            {
                if(on == 0)
                {
                    zero = 0;
                    on = 1;
                }
                else if(on == 2)
                {
                    z.pb(zero);
                    zero = 0;
                    on = 1;
                }
                one++;
            }
            else
            {
                if(on == 1)
                {
                    o.pb(one);
                    one = 0;
                    on = 2;
                }
                zero++;
            }


        }
        ll ans = 0;

        for(ll i = 0; i < (o.size()-1); i++)
        {
            if((a) > ( z[i]*b))
                ans += (z[i]*b);
            else
                ans += a;
        }

        if(o.size() > 0)
            ans += a;

        cout << ans << endl;



    }
    return 0;
}
