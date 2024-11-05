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

        ll num21 = 0 , m = 0 , t = 0 , fl = 0;
        while(1)
        {
            t = (2021 * num21);
            m = n - t;
            if(m < 0) break;
            ll t2 = m % 2020;

            if(t2 == 0)
            {
                fl = 1;
                break;
            }
            num21++;
        }
        if(fl) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


