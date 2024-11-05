#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define intMX           2147483648
#define longINF         9223372036854775808
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

vl v;
//ll bin_srch(ll lo,ll x,ll hi)
//{
//    ll res = -1,mid;
//
//    while(lo <= hi)
//    {
//        mid = (lo + hi) / 2;
//        if(v[mid] >= x)
//        {
//            res = mid;
//            hi = mid - 1;
//        }
//        else
//            lo = mid + 1;
//    }
//    return res ;
//}

int main()
{
    ll n;
    cin >> n;

    ll A[n+2],B[n+2];
    ll i,j;

    rep(i,0,n-1) {cin >> A[i];}
    rep(i,0,n-1) {cin >> B[i];}

    rep(i,0,n-1) {v.push_back(A[i] - B[i]);}

    sort(all(v));

    ll res = 0;
    rep(i,0,n-2)
    {
        ll tmp = (-1*v[i]) +1;
        vector<int>::iterator it;
        it = upper_bound(v.begin(),v.end(),tmp);

        if((it-v.begin())>-1)
            res += (n-(it-v.begin()));
    }
    cout << res << endl;
    return 0;
}

