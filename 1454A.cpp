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
    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        if(n%2)
        {
            cout << ceil(n/2.0) << ' ';

            for(ll i = n ; i >= 1; i--)
            {
                if(ceil(n/2.0) != i)
                    cout << i << ' ';
            }
            cout << endl;

        }
        else
        {
            for(ll i = n; i >= 1 ; i--)
                cout << i << ' ';

            cout << endl;

        }


    }
    return 0;
}


