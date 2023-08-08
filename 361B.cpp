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
    // sieve(100005);

    int n, k;
    cin >> n >> k;

    int nk = n - 1 ;


    if(nk >= k)
    {
        int tmp = (n - k) + 1;

        int nk = n - k;
        if(nk % 2)
        {
            cout << 1 << ' ' ;
            for(int i = 2 ; i < tmp ; i += 2)
                cout << (i+1) << ' ' << i << ' ' ;

        }
        else
        {
            for(int i = 1 ; i < tmp ; i += 2)
                cout << (i+1) << ' ' << i << ' ' ;

        }
        for(int i = tmp  ; i <= n ; i++)
            cout << i << ' ';

    }
    else
        cout << -1 << endl;

    return 0;
}

