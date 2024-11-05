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
        cin >> n;
        string st;
        cin >> st;

        ll flag = 0;
        ll odd = 0;
        if(n%2)
        {
            for(ll i = 0; i < n ; i += 2)
            {
                ll t = st[i] - '0';

                if(t%2)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            for(ll i = 1; i < n ; i+=2)
            {
                ll t = st[i] - '0';
                if(t%2)
                {
                    odd++;
                }
            }
            if(odd == (n/2)) flag = 1;
        }

        if(flag)
            cout << 1 << endl;
        else
            cout << 2 << endl;

    }
    return 0;
}


