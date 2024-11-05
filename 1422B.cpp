#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define pb              push_back
#define pf              printf
#define sc              scanf
#define pll             pair < ll, ll>
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
        ll n, m;
        cin >> n >> m;

        ll ar[n+2][m+2];
        for(ll i = 0; i < n ; i++)
        {
            for(ll j = 0; j < m ; j++)
            {
                cin >> ar[i][j];
            }
        }

        ll sum = 0;
        for(ll i = 0; i < ((n+1)/2); i++)
        {
            for(ll j = 0; j < ((m+1)/2); j++)
            {
                vl a;
                a.pb(ar[i][j]);
                if(i<(n-i-1))
                    a.pb(ar[n-i-1][j]);
                if(j < (m-j-1))
                    a.pb(ar[i][m-j-1]);
                if((n-i-1)>i && (m-j-1)>j)
                    a.pb(ar[n-i-1][m-j-1]);
                sort(all(a));
                ll avr = a[(a.size()-1)/2];

                for(ll k = 0; k < a.size() ; k++)
                    sum += abs(avr-a[k]);
            }
        }

        cout << sum << endl;
    }
    return 0;
}


