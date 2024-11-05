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

        ll ar[n+2];
        ll one = 0 , two = 0;

        for(ll i = 0; i < n ; i++)
        {
            cin >> ar[i];

            if(ar[i] == 1) one++;
            else two++;
        }
        ll sum = one + (2*two);

        if(sum%2 && one%2 || (n%2 && n == two))
            cout << "NO\n";
        else cout << "YES\n";


    }
    return 0;
}

