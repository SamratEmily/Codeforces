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
        ll n;
        cin >> n ;
        ll ar[n+2];
        ll lu[n+2];
        ll pr[n+2];
        mSet(pr , 0);
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> ar[i];
        }
        for(ll i = 0 ; i < n ; i++)
            cin >> lu[i];

        ll k = 0;
        vl v ;
        for(ll i = 0 ; i < n; i++)
        {
            if(lu[i] == 0)
            {
               pr[i]++;
               v.pb(ar[i]);
            }
        }
        sort(v.rbegin() , v.rend());
        ll c = 0;
        for(ll i = 0; i < n ; i++)
        {
            if(pr[i] == 1)
            {
                cout << v[c++] << ' ';
            }
            else
            {
                cout << ar[i] << ' ';
            }
        }
        cout << endl;



    }
    return 0;
}


