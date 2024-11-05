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

ll pown(ll a, ll b)
{
    ll cnt = 0;

    if(b == 1)
        return a;
    while(a)
    {
        cnt++;
        a /= b;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cout << pown(9 , 2) << endl;
    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n, m;
        cin >> m >> n;

        if(m < n)
        {
            cout << 1 << endl;
            continue;
        }
        else if(m == n)
        {
            cout << 2 << endl;
            continue;
        }
        ll ans = m;
        ll tm = n;
        for(ll i = tm; i <= (tm+200) ; i++)
        {
            ll t = pown(m, i);
            if(ans > t)
            {
                ans = t + (i - tm);
            }
            else break;
        }

        cout << ans << endl;


    }
    return 0;
}


