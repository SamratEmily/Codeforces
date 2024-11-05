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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n, a1, a2, k1, k2;
        cin >> a1 >> a2 >> k1 >> k2 >> n;

        ll ans1 = 0, ans2 = 0;
        if(k1 > k2)
        {
           swap(k1 , k2);
           swap(a1 , a2);

        }
        ll cnt = a1 * (k1-1) + a2 * (k2-1);
        if(cnt >= n) ans1 = 0;
        else ans1 = (n - cnt);

        if(n <= (a1 * k1)) ans2 = (n / k1);
        else ans2 = a1 + ((n - (a1*k1))/k2);

        cout << ans1 << ' ' << ans2 << endl;

    }
    return 0;
}


