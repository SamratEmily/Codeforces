#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n , m , k;
        cin >> n >> m >> k;

        ll pc = n - m;
        ll ec = (n / k);

        if(m < ec)
        {
            cout << m << endl;
            continue;
        }


        ll mxc = ec;
        m -= ec;

        ll tmp = ceil(m /((k-1)* 1.0));

        cout << (mxc - tmp) << endl;

    }



    return 0;
}


