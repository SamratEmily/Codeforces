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
        ll n, k;
        cin >> n >> k;

        ll ar[n+2];

        for(ll i = 0; i < n ; i++)
            cin >> ar[i];

        sort(ar, ar+n);
        ll cnt = 0, c = 0;

        ar[n] = 100005;
        ll ans = 0;
        ll sum = 0;
        for(ll i = 0; i < n ; i++)
        {
            sum  = ar[i];
            for(ll j = 0; j < n && i!=j ; j++)
            {
                sum += ar[j] ;

                if(sum > k)
                {
                    cnt ++;
                    sum -= ar[j];
                }
                else
                ans++;
            }

        }

        cout << (ans - cnt) << endl;



    }
    return 0;
}


