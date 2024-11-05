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


using namespace std;

const int fx[] = {+0,+1,-1,+0};
const int fy[] = {+1,+0,+0,-1};

ll m , n;
ll vis[1000][1000];

void dfs(ll x , ll y)
{
    cout << x << ' ' << y << endl;
    if(vis[x][y] == 1) return;

    vis[x][y] = 1;

    for(ll i = 0; i < 4; i++)
    {
        ll nx = x + fx[i];
        ll ny = y + fy[i];

        if(nx > 0 && nx <= n && ny > 0 && ny <= m && vis[nx][ny] == 0) dfs(nx , ny);
    }


}

int main()
{
    ll t, T;
    T = 1;
    //cin >> T;
    RUN_CASE(t,T)
    {
        ll x, y;
        cin >> n >> m >> x >> y;

        dfs(x , y);

    }

    return 0;
}


