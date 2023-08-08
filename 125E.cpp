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
#define intMX           __builtin_infd32()
#define Vout(v)         for(auto it: v)cout<<it<<' '; cout<<endl;
#define Vin(v)          for(auto &it: v)cin>>it;

using namespace std;

ll dp[20000007];

ll recur(ll n)
{
    if(n == 1) return dp[n] = 0;

    if(dp[n] != -1) return dp[n];
    ll o1 = recur(n-1)+1;
    ll o2 = 1e+9;
    ll o3 = 1e+9;
    if(n%2 == 0) o2 = recur(n/2)+1;
    if(n%3 == 0) o3 = recur(n/3)+1;
    return (dp[n] = min(o1, min(o2, o3)));
}
void solve(ll n)
{
        dp[1] = 0;
        dp[0] = 0;

        for(int i = 2; i <= n; i++)
        {
            int opt1 = dp[i-1];
            int opt2 = 1e+9, opt3 = 1e+9;

            if(i%2 == 0) opt2 = dp[i/2];
            if(i%3 == 0) opt3 = dp[i/3];

            dp[i] = min(opt1, min(opt2, opt3))+1;
        }
}

int main()
{
    recur(20000007);

    ll tc = 1;
    cin >> tc;

    ll T = tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        printf("Case %lld: %lld\n", T-tc, dp[n]);

    }
    return 0;
}


