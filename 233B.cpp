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

ll num ;
ll s(ll n)
{
    ll cnt = 0;
    while(n)
    {
        cnt += (n % 10);
        n /= 10;
    }
    return cnt;
}

bool ok(ll n)
{
    ll t1 = n * n;
    ll t2 = s(n) * n;

    if((t1 + t2) == num)
        return true;
    else
        return false;
}


int main()
{
    IOS;
    ll t, T;
    T = 1;
    //cin >> T;
    RUN_CASE(t,T)
    {
        ll m, n;
        cin >> num;

        //cout << s(12) << endl;;

        ll sq = sqrt(num);
        ll ans = -1;
        ll x = sq - 1000000 , y = sq + 1000000;
        if(x < 1) x = 1;
        for(ll i = x; i <= y ; i++)
        {
            if(ok(i))
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;

    }

    return 0;
}


