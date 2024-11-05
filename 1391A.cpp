#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define gcd(a,b)        __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)

#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;


int main()
{
    IOS;
    ll t, T;
    T = 1;
    cin >> T;
    RUN_CASE(t,T)
    {
        ll m , n;
        cin >> n;

        for(int i = 1 ; i <= n ; i++) cout << i << ' ';

        cout << endl;


    }

    return 0;
}


