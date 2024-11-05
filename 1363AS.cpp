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

    int x, n;
    while(t--)
    {
        cin >> n >> x;

        int ele;
        int i;
        int odd = 0, even = 0;
        rep(i, 1, n)
        {
            cin >> ele;

            if(ele % 2)
                odd++;
            else
                even++;
        }
        if(odd <= 0)
            cout << "NO" << endl;
        else
        {
            if(odd % 2 == 0) odd--;

            if(x % 2 == 0 && odd >= x)
                odd = x - 1;

            if((odd + even) >= x)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}


