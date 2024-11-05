#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;

        char st[n+2][m+2];
        ll i, j;
        vl cost;
        ll cnt = 0;
        rep(i, 0, n-1)
        {
            cnt = 0;
            rep(j, 0, m-1)
            {
                cin >> st[i][j];
                if(st[i][j] == '*')
                {
                    cost.pb(cnt);
                    cnt = 0;
                }
                else
                    cnt++;
            }
            if(cnt > 0)
                cost.pb(cnt);
        }

        ll tmp1 = (x + x);
        ll res = 0;
        if(tmp1 <= y)
        {
            rep(i, 0, cost.size()-1)
            {
                res += (x * cost[i]);
            }
        }
        else
        {
            rep(i, 0, cost.size()-1)
            {
                if(cost[i]%2)
                {
                    ll tmp2 = cost[i] / 2;
                    res += (tmp2 * y);
                    res += x;
                }
                else
                {
                    ll tmp2 = cost[i] / 2;
                    res += (tmp2 * y);
                }
            }

        }

        cout << res << endl;
    }


    return 0;
}


