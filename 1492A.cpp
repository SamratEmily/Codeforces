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
        ll p , a , b  , c, n;
        cin >> p >> a >> b >> c;

        ll n1  , n2 , n3;
        if(p%a == 0) n1 = 0;
        else n1 = (a -(p%a)) ;
        if(p%b == 0) n2 = 0;
        else n2 = (b -(p%b));
        if(p%c == 0) n3 = 0;
        else n3 = (c - (p%c));


        ll ans = min(n1 , min(n2 , n3));

        cout << ans << endl;
    }
    return 0;
}


