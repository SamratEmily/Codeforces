#include<bits/stdc++.h>

#define ull              long long int
#define ll             unsigned long long int
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

    //factorial();

    while(tc--)
    {
        ll n;
        cin >> n;
        ll ans = 1;

        for(ll i = n; i > (n-5) ; i--) ans = (ans*i);

        ll num = ans;

        ans /= 120;

        ans *= num;
        cout << ans << endl;


    }
    return 0;
}


