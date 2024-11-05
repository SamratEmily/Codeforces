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

ll mn = 12345678910123456789;

bool ok(ll p, ll n)
{
    ll m = n;
    ll sum = 0;
    while(m)
    {
        if(m >= p)
        {
            sum += p;
            m -= p;
        }
        else
        {
            sum += m;
            m = 0;
        }
        ll tmp = (m / 10);
        m -= tmp;
    }

    if(sum >= ((n+1)/2))
        return true;
    else
        return false;

}

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


        ll lo = 1, hi = n, mid;

        while(lo < hi)
        {
            mid = (lo + hi) / 2;

            if(ok(mid, n))
            {
                hi = mid;
            }
            else
                lo = mid+1;
        }

        cout << lo << endl;


    }
    return 0;
}


