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
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define nl              printf("\n")


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

//-------------------------------------------------------------------------------------
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x, n, m;
        cin >> x >> n >> m;

        for(int i = 0; i < n && x > 20 ; i++)
        {
            x = (x / 2) + 10;
        }
        for( int i = 0 ; i < m ; i++)
            x -= 10;

        if(x <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

//https://github.com/me-shaon/bangla-programming-resources


