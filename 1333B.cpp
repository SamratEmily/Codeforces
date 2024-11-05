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
    int tc;
    scin(tc);

    while( tc-- )
    {
        vector<int> v1,v2;
        int n;
        scin(n);

        v1.push_back(0);
        v2.push_back(0);

        int x;
        for(int i = 0; i < n ; i++)
        {
            scin(x);
            v1.push_back(x);
        }
        for(int i = 0; i < n ; i++)
        {
            scin(x);
            v2.push_back(x);
        }

        int zero = 0, pos = 0, neg = 0;
        int res = 0;

        for(int i = 1 ; i <= n ; i++)
        {
            if( v1[i] != v2[i])
            {
                if(v2[i] == 0)
                {
                    if(v1[i] == -1 && pos != 1)
                        res = -1;
                    else if(v1[i] == 1 && neg != -1)
                        res = -1;

                }
                else if(v2[i] > 0)
                {
                    if(pos != 1)
                        res = -1;

                }
                else
                {
                    if(neg != -1)
                        res = -1;

                }
            }
            if(v1[i] == 1)
                pos = 1;
            else if (v1[i] == -1)
                neg = -1;

        }

        if ( res == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

