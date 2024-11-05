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
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int ar[n+5],i;

        rep(i,0,n-1)
        {
            cin >> ar[i];
        }
        if(n == 1 && ar[0] % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        if(ar[0] % 2 && ar[1] %2 )
        {
            cout << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
        }
        else if(ar[0] % 2 == 0) cout << 1 << endl,cout << 1 << endl;
        else if(ar[1] % 2 == 0) cout << 1 << endl, cout << 2 << endl;

    }

    return 0;
}

