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
#define gcd( a, b)      __gcd( a, b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))


//--------------------   Constant  --------------------------------------------------
#define intMX           2147483648
#define longINF         9223372036854775808
#define infinity                (1<<28)
#define MOD             1000000007
#define PI              2*acos(0.0)

//-------------------------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

//-------------------------------------------------------------------------------------
using namespace std;

#define BOOSTUP         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/**     toint, tostring, BigMod, Power , sieve, Primefactorize ,frequency in n!     **/
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll Power(ll a,ll n){ll ret=1;for(ll i=1 ; i<=n ; i++)ret = ((ret%MOD)*(a%MOD))%MOD;return ret;}
//vector<ll>Prime;
//bool mark[10000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;Prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){Prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}

int ar[100];
void solve()
{
    int n;
    cin >> n;

    int m = 0;
    int p = 0;
    int current = 1;
    while(n)
    {
        p = n % 10;
        m = max(m , p);

        for(int i = 0; i < p ; i++) ar[i]+=current;

        current *= 10;
        n /= 10;
    }

    cout << m << endl;

    for(int i = m-1 ; i >= 0 ; i--)
        cout << ar[i] << ' ';
    cout << endl;

}

int main()
{
    BOOSTUP;
    solve();
    return 0;
}

//https://github.com/me-shaon/bangla-programming-resources


