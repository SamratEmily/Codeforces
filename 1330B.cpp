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
    int m , n;
    cin >> n >> m;

    int ar[m + 2];

    int sum = 0;
    int a[m+2];
    for(int i = 0; i < m ; i++)
    {
        cin >> ar[i];

        int tmp = n - ar[i] + 1;
        int tmp2 = ar[i] - 1;

        a[i] = tmp - tmp2 ;
        cout << tmp - tmp2 << endl;

        sum += a[i];
    }

    if(sum < n) cout << -1 << endl;
    else
    {
        for(int i = 0; i < m ; i++)
            cout << a[i] << ' ';
        cout << endl;
    }

    return 0;
}

