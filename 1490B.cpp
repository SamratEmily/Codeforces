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

        ll c0 = 0 , c1 = 0 , c2 = 0;
        ll x;
        for(int i = 0; i < n ; i++)
        {
            cin >> x;

            if(x%3 == 0) c0++;
            else if(x%3 == 1) c1++;
            else c2++;
        }
        ll av1 = (c0 + c1 + c2) / 3;
        ll av2 = ceil(c0 + c1 + c2) / 3.0;

        ll ans1 = abs(av1 - c0) + abs(av1 - c1) + abs(av1 - c2);
        ll ans2 = abs(av2 - c0) + abs(av2 - c1) + abs(av2 - c2);

        cout << min(ans1 , ans2) << endl;


    }
    return 0;
}


