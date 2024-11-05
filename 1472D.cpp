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

        vl num;
        ll x;
        for(ll i = 0; i < n ; i++)
        {
            cin >> x;

            num.pb(x);
        }
        sort(all(num));
        ll sum = 0;
        ll f = 0;
        for(ll i = n-1; i >= 0 ; i--)
        {
            if(f)
            {
                if(num[i]%2)
                {
                    sum -= num[i];
                }
                f = 0;
            }
            else
            {
                if(num[i]%2 == 0)
                {
                    sum += num[i];
                }
                f = 1;
            }
        }

        //cout << sum << ' ';

        if(sum > 0)
            cout << "Alice\n";
        else if(sum < 0)
            cout << "Bob\n";
        else
            cout << "Tie\n";

    }
    return 0;
}


