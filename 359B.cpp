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
    //cin >> tc;

    while(tc--)
    {
        ll n , k;
        cin >> n >> k;

        vl v;

        for(ll i = 1; i <= (2*n) ; i++) v.pb(i);

        for(ll i = 0; i < (2*k) ; i += 2)
        {
            swap(v[i] , v[i+1]);
        }

        for(ll i = 0; i < (2*n) ; i++) cout << v[i] << ' ';
        cout << endl;



    }
    return 0;
}


