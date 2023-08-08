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

bool vis[2005];
int mx_depth[2005];
vector<int> g(20005);

void dfs(int u, int p, int d)
{

    mx_depth[u] = d;

    for(int i=0; i < g.size(); i++)
    {
        if(g[i]!=p){
            dfs(g[i], u, d+1);
            mx_depth[u]=max(mx_depth[u], mx_depth[g[i]]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
   // cin >> tc;

    ll t = tc;
    while(tc--)
    {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) cin >> g[i];

        dfs(1, -1, 0);

        int ans = 0;

        for(int i= 0;i < n; i++)
        {
            ans = max(ans, mx_depth[g[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}



