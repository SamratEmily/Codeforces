#include<bits/stdc++.h>

//-----------------------------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define all(v)          v.begin(),v.end()
#define vi              vector<int>
#define vl              vector<ll>
#define vii             vector<vector<int> >
#define vll             vector<vector<ll> >
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mp              make_pair
#define mset(a,b)       memset(a,b,sizeof(a))
#define lo_case(st)     transform(st.begin() , st.end() , st.begin(),::tolower )
#define up_case(st)     transform(st.begin() , st.end() , st.begin(),::toupper )
#define gcd             __gcd
#define lcm(a,b)        (a*(b/__gcd(a,b)))


//--------------------   Constant  --------------------------------------------------
#define intMX           2147483648
#define longINF         9223372036854775808
#define infinity        (1<<28)
#define MOD             1000000007
#define PI              2*acos(0.0)

//-------------------------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

using namespace std;


int n;
int fr[1000006];
vector<int> v;
bool ok(int n)
{
    int mx = 0;
    int dis = 0;
    for(int i = 0; i < v.size() ; i++)
    {
        if(fr[v[i]] >= n)
        {
            mx = max(mx, fr[v[i]]);
            //break;
        }
    }
    if(mx == n)
        dis = (v.size()-1);
    else if(mx > n)
        dis = v.size();

    int flag = 0;
    if(mx >= n && dis >= n)
        flag = 1;

    return flag;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        int n;
        cin >> n;
        int x;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            fr[x]++;
            if(fr[x] == 1)
                v.push_back(x);
        }
        int lo = 0, hi = n / 2;
        int mid;
        while(lo < hi)
        {
            mid = (lo + hi + 1) / 2;
            if(ok(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }

        cout << hi << endl;

        for(ll i = 0; i < v.size(); i++)
            fr[v[i]] = 0;
    }
    return 0;
}


//https://github.com/me-shaon/bangla-programming-resources


