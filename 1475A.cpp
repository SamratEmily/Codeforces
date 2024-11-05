#include<bits/stdc++.h>

//------------------ ShortCut ---------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define vi              vector<int>
#define vl              vector<ll>
#define vii             vector<vector<int> >
#define vll             vector<vector<ll> >
#define all(X)          X.begin(),X.end()
#define vRev(a)         reverse(a.begin(),a.end())
#define vMin(a)         *min_element(a.begin(),a.end())
#define vMax(a)         *max_element(a.begin(),a.end())
#define vSum(a)         accumulate(a.begin(),a.end(),0)
#define mSet(a,b)       memset(a,b,sizeof(a))
#define SORT(a)         sort(a.begin(),a.end())
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define MP              make_pair
#define low_case(st)    transform(st.begin() , st.end() , st.begin(),::tolower )
#define upp_case(st)    transform(st.begin() , st.end() , st.begin(),::toupper )
#define gcd(a, b)       __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define nl              printf("\n")


//--------------------   Constant  --------------------------------------------------
#define intMX           __builtin_infd32()
#define longMX          __builtin_infd64()
#define inf             (1<<30)
#define MOD             1000000007
#define PI              2*acos(0.0)

//------------------- Loop_ShortCut ------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

//-------------------------------------------------------------------------------------
using namespace std;

#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



int main()
{
    int t, T;
    T = 1;
    cin >> T;
    RUN_CASE(t, T)
    {
        ll m, n;
        cin >> n;
        ll div = 0;
        while(n%2 == 0)
            n /= 2;
        if(n%2 && n > 1) div = 1;

        if(div)
            yes;
        else
            no;
    }

    return 0;
}



