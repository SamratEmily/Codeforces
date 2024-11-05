#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define scln(x)         scanf("%lld",&(x))
#define pll             pair < ll, ll>
#define MP              make_pair
#define gcd(a,b)        __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define mSet(a,b)       memset(a,b,sizeof(a))
#define MOD             1000000007
#define PI              2*acos(0.0)

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        vl v(n);

        for(ll i = 0; i < n ; i++)
            cin >> v[i];

        ll ve = 0 , hi = 0;
        for(ll i = 1; i < n-1 ; i++)
        {
            if(v[i-1] < v[i] && v[i+1] < v[i])
            {
                hi++;
                i+=2;
            }
            else if(v[i-1] > v[i] && v[i+1] > v[i])
            {
                ve++;
                i+=2;
            }

        }
        ll sum = (ve+hi);
        if(sum == 0) cout << 0 << endl;
        else
        cout << (sum-1) << endl;


    }
    return 0;
}


