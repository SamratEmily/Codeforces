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

        map<ll, ll > m;
        ll ar[n+2];

        for(ll i = 0; i < n ; i++)
        {
            cin >> ar[i];

            m[ar[i]]++;
        }

        bool flag = false;

        for(ll i = 0; i < n ; i++)
        {
            if(m[ar[i]] > 1)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n" << endl;


    }
    return 0;
}

