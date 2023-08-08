#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vi              vector<int>
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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--)
    {
        int n, l;
        cin >> n >> l;

        vi v(n);
        for(int i = 0 ; i < n; i++) cin >> v[i];

        sort(all(v));

        int mx = 0;

        for(int i = 0; i < n-1; i++)
        {
            mx = max(mx, v[i+1]-v[i]);
        }
        double ans = mx/2.0;

        ans = max(ans, double(v[0]-0));
        ans = max(ans, double(l-v[n-1]));

        printf("%.9lf\n", ans);
    }
    return 0;
}


