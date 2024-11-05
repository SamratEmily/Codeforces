#include<bits/stdc++.h>

//------------------ ShortCut ---------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define db              double
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
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define mp              make_pair
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

//------------------- Loop_ShortCut ------------------------------------------------------------------
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

//-------------------------------------------------------------------------------------
using namespace std;

#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


/**  toint, tostring , Sieve, Primefactorize ,frequency in n!  , BinarySearch , Totient , Permutation , BigMod , nCr  **/
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}

//vector<ll>Prime;
//bool mark[10000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;Prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){Prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}

//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}

//ll per[2000006];
//void factorial(){per[0] = 1;for(ll i = 1; i  <= 2000000 + 2; i++) per[i] = ((per[i-1] % MOD ) * (i%MOD) ) % MOD;}

//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
//ll nCr(ll n , ll r){ll temp = (per[r] * per[n-r]) % MOD;ll ans = (per[n] * BigMod(temp , MOD-2)) % MOD;return ans;}
//ll Bin_Search(ll ara[], ll n, ll k){ll l=0,h=n-1,mid,ans=0;while(l<=h){mid=(l+h)/2;if(ara[mid]>=k){h=mid-1;ans=mid;}else l=mid+1; }return ans;}
//bool cmp(int a, int b){return a > b;}

//vector<string> vs;
//void subString(string s, int n) {for (int i = 0; i < n; i++)  for (int len = 1; len <= n - i; len++)  vs.pb(s.substr(i, len) );}


int main()
{
    //sieve();
    //factorial();
    IOS;

    int t, T;
    T = 1;
    cin >> T;
    RUN_CASE(t, T)
    {
        ll m, n;
        cin >> n;
        vl v, v2;
        ll i, x;
        ll mn = intMX;;
        rep(i, 0, n-1)
        {
            cin >> x;
            v.pb(x);
            mn = min(mn, x);
        }
        //cout << mn << endl;

        v2 = v;
        sort(all(v2));
        ll flag = 0;
        rep(i, 0, n-1)
        {
            if(v[i] != v2[i])
            {
                ll g = gcd(v[i], mn);
                if(g != mn)
                {
                    flag = -1;
                }
            }
        }

        if(flag == -1)
            no;
        else
            yes;

    }

    return 0;
}




