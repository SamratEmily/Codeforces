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
//ll Power(ll a,ll n){ll ret=1;for(ll i=1 ; i<=n ; i++)ret = ((ret%MOD)*(a%MOD))%MOD;return ret;}
//vector<ll>Prime;
//bool mark[10000003];
//void sieve(ll n){ll i,j;mark[1]=1;for(i=4; i<=n; i+=2)mark[i]=1;Prime.push_back(2);for(i=3; i<=n; i+=2){if(!mark[i]){Prime.push_back(i);if(i*i<=n){for(j=i*i; j<=n; j+=(i*2))mark[j]=1;}}}}
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/** Frequency of a factor in n! **/{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}
//ll bin(ll ara[], ll n, ll k){ll l=0,h=n-1,mid,ans=0;while(l<=h){mid=(l+h)/2;if(ara[mid]>=k){h=mid-1;ans=mid;}else l=mid+1; }return ans;}
/*void computeTotient(int n){ll phi[n+5];for (int i=1; i<=n; i++)phi[i] = i;for (int p=2; p<=n; p++)
{if (phi[p] == p){phi[p] = p-1;for (int i = 2*p; i<=n; i += p){phi[i] = (phi[i]/p) * (p-1);}}}}*/
//bool cmp(int a, int b){return a > b;}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n ;
        cin >> n;
        vl v;
        ll x, i;
        rep(i, 0, n-1)
        {
            cin >> x;
            v.pb(x);
        }

        ll bob = 0, alice = v[0], sum = v[0], tmpsum = 0, moves = 1;
        ll fr = 1, ba = n-1;
        while(fr <= ba)
        {
            while(sum >= tmpsum && fr <= ba)
            {
                bob += v[ba--];
                tmpsum += v[ba + 1];
            }
            if(tmpsum)
            moves++;
            sum = tmpsum ;
            tmpsum = 0;
            while(sum >= tmpsum && fr <= ba)
            {
                alice += v[fr++];
                tmpsum += v[fr-1];
            }
            if(tmpsum)
            moves++;
            sum = tmpsum ;
            tmpsum = 0;
           // cout << moves << ' ' ;
        }

        cout << moves << ' ' << alice << ' ' << bob << endl;
    }



    return 0;
}



