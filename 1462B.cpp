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


int main()
{

    int t, T;
    T = 1;
    cin >> T;

    vector<string> v;
    v.pb("2020");
    v.pb("202");
    v.pb("020");
    v.pb("20");

    RUN_CASE(t, T)
    {
        ll m, n;
        cin >> n;


        string st;
        cin >> st;

        ll a1 = 0, a2 = 0,a3 = 0, a4 = 0;
        string vs = "", vss = "";
        vs = st[0];
        vs += st[1];
        vs += st[2];
        vs += st[3];

        vss = st[n-4];
        vss += st[n-3];
        vss += st[n-2];
        vss += st[n-1];
        if(vs == v[0] || vss == v[0])
        {
            a1 = 1;

        }

        vs = st[0];
        vs += st[1];
        vs += st[2];
        if(vs == v[1])
        {
            if(st[n-1] == '0')
            {
                a2 = 1;
            }
        }

        if(st[0] == '2')
        {
            vs = st[n-3];
            vs += st[n-2];
            vs += st[n-1];

            if(v[2] == vs)
            {
                a3 = 1;
            }
        }


        vs = st[0];
        vs += st[1];

        if(vs == v[3])
        {
            vs = st[n-2];
            vs+= st[n-1];
            if(vs == v[3])
            {
                a4 = 1;
            }
        }

        if(a1 == 1 || a2 == 1 || a3 == 1 || a4 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}



