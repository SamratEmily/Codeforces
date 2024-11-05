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

    while( t-- )
    {
        int n, x;
        cin >> n >> x;

        int ar[n+5];
        int cnt = 0;
        int sum = 0;
        ar[0] = 0;
        for(int i = 1; i <= n ; i++)
        {
            cin >> ar[i];
        }

        sort(ar + 1, ar + n + 1);

        int i = 0;

        int place = 0, t = 0;

        for(i = 1; i <= n ; i++)
        {
            int tmp = ar[i] - ar[i-1] - 1;

            if(tmp > 0 && x > 0 )
            {
                if( tmp > x)
                {
                    place = ar[i - 1] + x ;
                    x = 0;
                }
                else
                {
                    place = ar[i] ;
                    x -= tmp;
                }
            }
            else if(place+1 == ar[i])
                place = ar[i];
        }

        cout << place + x << endl;
    }


    return 0;
}
