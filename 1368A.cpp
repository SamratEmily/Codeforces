

#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll a, b, n;

        cin >> a >> b >> n;

        ll sum = max(a, b);
        ll cnt = 0;
        while(sum <= n)
        {

            cnt++;
            sum = a + b;
            if(a < b)
                a = sum;
            else
                b = sum;
        }
        cout << cnt << endl;
    }



    return 0;
}


