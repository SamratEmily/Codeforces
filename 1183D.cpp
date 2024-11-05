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
#define vSum(a)         accumulate(a.begin(),a.end(),0)

#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mp              make_pair
#define mSet(a,b)       memset(a,b,sizeof(a))
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

#define BOOSTUP         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int fr[200005];
bool cmp(int a, int b)
{
    return a > b;
}


int main()
{
    BOOSTUP;
    int q;
    scin(q);

    while(q--)
    {
        int n;
        scin(n);

        int ar[n+2] ;
        //mSet(fr, 0);
        int i;
        rep(i, 0, n-1)
        {
            scin(ar[i]);
            fr[ar[i]]++;
        }
        sort(fr + 1,fr + n + 1,greater<int>());
        int ans  = fr[1];
        int now  = fr[1];
        for(i = 2 ; fr[i] != 0 ; i++)
        {
            now--;

            if(now <= 0)
                break;
            now = min(now, fr[i]);
            ans += now;
        }
        rep(i, 1, n) fr[i] = 0;

        pf("%d\n", ans);
    }
    return 0;
}



