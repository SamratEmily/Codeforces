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
    int n;
    cin >> n;

    string st;
    int i;
    while(n--)
    {
        cin >> st;
        int cnt = 0, mx = 0;
        rep(i,0,st.size()-1)
        {
            if(st[i] == 'L')
                cnt++ ;
            else
            {
                mx = max(mx,cnt);
                cnt = 0;
            }

        }
        mx = max(mx,cnt);


        cout << mx+1 << endl;
    }


    return 0;
}
