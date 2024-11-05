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
        ll n , m;
        cin >> m >> n;

        ll ar[m+2][n+2];
        ll num;
        ll sum = 0;
        for(ll i = 0; i < m ; i++)
        {
            for(ll j = 0; j < n ; j++)
            {
                cin >> ar[i][j];
                if(i == 0 && j == 0) num = ar[i][j];
                else
                sum += abs(ar[i][j]);
            }
        }
        sum += num;

        cout << sum << endl;


    }
    return 0;
}


