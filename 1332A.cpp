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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        int x,y,x1,y1,x2,y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        int tmp1 = b - a - x;
        int tmp2 = d - c - y;

        if((x1 == x2 && y1 == y2) && (tmp1 ==0 && tmp2 == 0))
        {
            cout << "No" << endl;
            continue;
        }

        if( (tmp1 >= x1 && tmp2 >= y1) && (tmp1 <= x2 && tmp2 <= y2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}

