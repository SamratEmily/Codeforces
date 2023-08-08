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
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)


using namespace std;


int main()
{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n;
        sc("%lld" , &n);

        ll s0 = n ;
        ll s1 = ((n / 2) + (n / 3) + (n / 5) + (n / 7));
        ll s2 =  ((n / 6 ) + (n / 10)+ (n / 14)+ (n / 15)+ (n / 21)+ (n / 35));
        ll s3= ((n / 30)+ (n / 42) + (n / 70)+(n / 105));
        ll s4 = (n / 210);

        ll ans = s0 - s1 + s2 - s3 + s4;

        pf("%lld\n" , ans);




    }
    return 0;
}


