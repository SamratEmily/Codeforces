#include<bits/stdc++.h>

//-----------------------------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define db              double
#define vi              vector<int>
#define vl              vector<ll>
#define vii             vector<vector<int> >
#define vll             vector<vector<ll> >
#define all(v)          v.begin(),v.end()
#define vRev(a)         reverse(a.begin(),a.end())
#define vMin(a)         *min_element(a.begin(),a.end())
#define vMax(a)         *max_element(a.begin(),a.end())
#define vSum(a)         accumulate(a.begin(),a.end(),0)
#define SORT(a)         sort(a.begin(),a.end())
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define scs(s)          scanf("%s" , (s) )
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define mp              make_pair
#define mset(a,b)       memset(a,b,sizeof(a))
#define low_case(st)    transform(st.begin() , st.end() , st.begin(),::tolower )
#define upp_case(st)    transform(st.begin() , st.end() , st.begin(),::toupper )
#define gcd(a, b)       __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define nl              printf("\n")


//--------------------   Constant  --------------------------------------------------
#define intMX           2147483648
#define longMX          9223372036854775808
#define inf             (1<<28)
#define eps             1e-9
#define MOD             1000000007
#define PI              2*acos(0.0)

//-------------------------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

//-------------------------------------------------------------------------------------
using namespace std;

/**  toint, tostring, BigMod, Power , Sieve, Primefactorize ,frequency in n!  , BinarySearch , Totient   **/
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
ll Power(ll a,ll n)
{
    ll ret=1;
    for(ll i=1 ; i<=n ; i++)
        ret = ((ret%MOD)*(a%MOD))%MOD;
    return ret;
}

ll check(ll n)
{
    ll cnt = 0;
    while(n!=0)
    {
        n /= 10;
        cnt++;
    }

    return cnt;
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        ll n;


        cin >> n;

        ll i ;
        vl v;
        ll di = 0;
        ll tmp = 0;
        while(check(n) > 1)
        {
            di = check(n);
            tmp = Power(10, di-1);
            if(n % tmp == 0)
            {
                v.pb(n);
                n = 0;
                break;
            }
            else
                v.pb((n / tmp) * tmp) ;

            n = n % tmp;
        }
        if(n != 0)
            v.pb(n);


        cout << v.size() << endl;
        rep(i, 0, v.size()-1)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }


    return 0;
}



