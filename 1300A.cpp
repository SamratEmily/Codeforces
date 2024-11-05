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

        int ar[n+2];

        int res = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i] ;
            if(ar[i]==0)
            {
                res++;
                ar[i] = 1;
            }
            sum += ar[i];
        }
        if(sum == 0) cout << res + 1 << endl;
        else cout << res << endl;
    }


    return 0;
}

