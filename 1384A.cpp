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
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;


int main()
{
    ll t, T;
    T = 1;
    cin >> T;
    RUN_CASE(t,T)
    {
        ll m, n;
        cin >> n;

        vl v;
        ll i, x;
        rep(i, 0, n-1)
        {
            cin >> x;
            v.pb(x);
        }
        string s = "";
        rep(i , 0 , 51) s += 'a';

        cout << s << endl;

        rep(i , 0 , n-1)
        {
            if(s[v[i]] == 'a') s[v[i]] = 'b';
            else s[v[i]] = 'a';

            cout << s << endl;
        }

    }

    return 0;
}


