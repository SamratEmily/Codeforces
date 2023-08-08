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
//int ar[1000]1000];

int main()
{
    int n,m;
    cin >> n >> m;

    char st[n+2][m+2];

    int i,j,k;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            cin >> st[i][j];

        }
    }
    int cnt = 0;
    int r1 = 0, r2 = 0;
    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            if(st[i][j] == '*')
            {
                cnt++ ;

                if(cnt == 2)
                    r2 = j;
                else
                    r1 = j;
            }
        }

        if(cnt ==  2)
            break;
        else
            cnt == 0;
    }

    //cout << r1 << ' ' << r2 << endl;

    int c = 0;
    int r = 0;

    rep(i,0,n-1)
    {
        rep(j,0,m-1)
        {
            if(st[i][j] == '*')
            {
                c++, r = j;
            }

        }
        if(c == 1)
        {
            if(r == r1)
                cout << i+1 << ' ' << r2 + 1 << endl;
            else
                cout << i+1  << ' ' << r1 + 1 << endl;

            return 0;
        }
        else
            c = 0;
    }


    return 0;
}

