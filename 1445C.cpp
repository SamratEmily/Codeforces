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


//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}

//ll per[2000006];
//void factorial(){per[0] = 1;for(ll i = 1; i  <= 2000000 + 2; i++) per[i] = ((per[i-1] % MOD ) * (i%MOD) ) % MOD;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll nCr(ll n , ll r){ll temp = (per[r] * per[n-r]) % MOD;ll ans = (per[n] * BigMod(temp , MOD-2)) % MOD;return ans;}

//ll Bin_Search(ll ara[], ll n, ll k){ll l=0,h=n-1,mid,ans=0;while(l<=h){mid=(l+h)/2;if(ara[mid]>=k){h=mid-1;ans=mid;}else l=mid+1; }return ans;}
//bool cmp(int a, int b){return a > b;}

//vector<string> vs;
//void subString(string s, int n) {for (int i = 0; i < n; i++)  for (int len = 1; len <= n - i; len++)  vs.pb(s.substr(i, len) );}

/*
struct Point
{
    ll x , y;
};

bool operator<(Point A, Point B )
{
    if(A.x != B.x )
        return A.x < B.x ;
    return A.y < B.y  ;
}
*/



int main()
{
    //IOS;
    sieve(1000006);

    int t, T;
    T = 1;
    cin >> T;
    RUN_CASE(t, T)
    {
        //ll m , n;
        ll p, q;
        cin >> p >> q;
        if(q>p)
        {
            cout<<q<<endl;
            continue;
        }
        ll x = gcd(p,q);
        if(x!=q)
        {
            cout<<p<<endl;
            continue;
        }
        ll y = p/q;
        ll sq = sqrt(p);
        ll ans = 0;
        if(sq >= q)
        {

        }

    }
    return 0;
}



