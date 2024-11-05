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

    int t, T;
    T = 1;
    cin >> T;

    ll ar[10];

    for(ll i = 1; i < 10 ; i++) ar[i-1] = i;
    RUN_CASE(t, T)
    {
        //ll m , n;

        ll x;
        cin >> x;

        ll n1 = 0 , n2 = 0;

        ll sum1 = 0 , sum2 = 0;
        for(ll i = 0; i < 10 ; i++)
        {
            if((sum1+ar[i]) <= x)
            {
                sum1 += ar[i];
                n1 = (n1*10) + ar[i];
            }
        }

        for(ll i = 9 ; i >= 0 ; i--)
        {
            if((sum2+ar[i]) <= x )
            {
                sum2 += ar[i];
                n2 = (n2*10)+ar[i];
            }
        }

        if(sum1 == x || sum2 == x)
        {
            if(sum1 == x && n1 < n2) cout << n1 << endl;
            else
            {
                while(n2)
                {
                    cout << (n2%10) ;
                    n2 /= 10;
                }
                cout << endl;
            }
        }
        else cout << -1 << endl;

    }

    return 0;
}



