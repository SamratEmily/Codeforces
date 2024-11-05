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

        int nec[n+2],brc[n+2];

        for(int i = 0; i < n; i++)
            cin >> nec[i];
        sort(nec,nec+n);
        for(int i = 0; i < n; i++)
            cin >> brc[i];
        sort(brc,brc+n);

        for(int i = 0; i < n; i++)
            cout << nec[i] << ' ';
        cout << endl;
        for(int i = 0; i < n; i++)
            cout << brc[i] << ' ';
        cout << endl;
    }


    return 0;
}

