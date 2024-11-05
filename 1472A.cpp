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
        ll w, h;
        cin >> w >> h >> n;

        ll res = 0, v = 0;

        v = (w*h);
        if(w%2 == 0 && h%2 == 0)
        {
            while(w%2 == 0)
            {
                w /= 2;
            }
            while(h%2 == 0)
            {
                h /= 2;
            }
            res = (v) / (w*h);
        }
        else if(w%2 == 0)
        {
            while(w%2 == 0)
            {
                w /= 2;
            }
            res = v / (w*h);
        }
        else if(h%2 == 0)
        {
            while(h%2 == 0)
            {
                h /= 2;
            }
            res = v / (w*h);
        }
        else
        {
            res = v / (w*h);
        }

        if(res >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


