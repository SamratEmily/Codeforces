#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define intMX           2147483648
#define longINF         9223372036854775808
#define scin(x)     > v;    scanf("%d",&(x))
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

    int n,i,j,x;
    vector<int> v,v2;
    while(t--)
    {
        cin >> n;

        rep(i,0,n-1)
        {
            cin >> x;
            v.push_back(x);
        }
        int res = 0;

        rep(i,0,n-1)
        {
            rep(j,i+2,n-1)
            if(v[i] == v[j]) res =1 ;
        }

        if(res == 1) cout << "YES" << endl;
        else cout << "NO" << endl;

        v.clear();
        v2.clear();
    }

    return 0;
}

