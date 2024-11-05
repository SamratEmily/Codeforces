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
        ll n , x;
        cin >> n >> x;

        vl v(n+1);
        v[0] = -1;
        for(ll i = 1; i <= n ; i++) cin >> v[i];

        ll ok = 0 , ans = 0;
        for(ll i = 1; i <= n ; i++)
        {
            if(is_sorted(v.begin()+1 , v.end()))
            {
                ok = 1;
                break;
            }
            else
            {
                if(v[i] > x)
                {
                    ans++;
                    swap(v[i] , x);
                }
                else if(v[i] < v[i-1])
                {
                    ok = 0;
                    break;
                }
            }
        }

        if(ok == 0) ans = -1;


        cout << ans << endl;


    }
    return 0;
}


