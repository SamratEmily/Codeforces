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
    ll k;
    cin >> k;

    string st = "codeforce";

    ll k10 = k / 10000000000;
    k = k % 10000000000;

    ll k5 = (k10 * 10000000000) / 100000;
    k += (k10 * 10000000000) % 100000;
    k5 += k / 100000;
    ll k2 = k % 100000;
    ll i;
    string s = "";
    cout << st ;

    rep(i , 0 , 100000)  s += 's';

    rep(i , 0 , k5-1) cout << s ;

    rep(i , 0 , k2-1) cout << 's' ;

    cout << endl;

    return 0;
}


