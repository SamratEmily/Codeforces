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
        string st,s1,s2;
        int n;

        cin >> n >> st;

        for(int i = 0; i < n ; i++ )
        {
            if(s2[i-1] == '0' && s1[i-1] != '0')
            {
                for(int j = i; j < n ; j++)
                {
                    s1 += '0';
                    s2 += st[j];
                }
                i = n-1;
            }
            else if(st[i] == '2')
            {
                s1 += '1';
                s2 += '1';
            }
            else if(st[i] == '1')
            {
                s1 += '1';
                s2 += '0';

            }
            else
            {
                s1 += '0';
                s2 += '0';
            }

        }
        cout << s1 << endl;
        cout << s2 << endl;
    }

    return 0;
}

