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
    cin >> tc;

    while(tc--)
    {
        ll n;
        ll a, b, x, y;
        cin >> a >> b >> x >> y >> n;

        ll dif1 = abs(a - x);
        ll dif2 = abs(b - y);
        ll aa = a , bb = b ,nn = n;

        //ll mn1 = min(dif1 , dif2);
        aa -= min(nn , dif1);
        nn -= min(nn , dif1);
        bb -= min(nn , dif2);

        b -= min(n , dif2);
        n -= min(n , dif2);
        a -= min(n , dif1);


        cout << min(a * b , aa * bb) << endl;


    }
    return 0;
}


