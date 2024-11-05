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
        ll n;
        ll a, b;
        cin >> n >> a >> b;

        ll v[n+2];
        ll i , x;
        ll sum = 0;
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(v+1,v+n);

//        for(ll i = 0 ; i < n ; i++)
//            cout << v[i] << ' ';
//        cout << endl;

        ll temp = (a * v[0]) / sum;

        if(temp >= b)
        {
            cout << 0 << endl;
        }
        else
        {
            ll res = 0;
            for(ll i = n-1 ; i >= 1 ; i--)
            {
                res++;
                sum -= v[i];
                temp = (a * v[0]) / sum;

                if(temp >= b)
                {
                    cout << res << endl;
                    return 0;
                }
            }
        }



    }
    return 0;
}


