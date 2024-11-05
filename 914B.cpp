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
#define Vout(v)         for(auto it: v)cout<<it<<' '; cout<<endl;
#define Vin(v)          for(auto &it: v) cin>>it;


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
        ll n;
        cin >> n;

        vl v(n);
        Vin(v);

        map<ll ,ll > m;
        for(ll i = 0; i < n; i++)
        {
            m[v[i]]++;
        }

        ll mx = 0;

        for(ll i = 0; i < n ; i++)
        {
            if(m[v[i]]%2) mx = 1;
        }

        if(mx == 0)
            cout << "Agasa\n";
        else
            cout << "Conan\n";

    }
    return 0;
}


