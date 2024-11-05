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

ll ar[10];

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

        string st;
        cin >> st;

        ll f = 0, b = 9;
        for(ll i = 0; i < n ; i++)
        {
            if(st[i] == 'L')
            {
                for(ll j = 0 ; j < 10 ; j++)
                    if(ar[j] == 0)
                    {
                        ar[j]++;
                        break;
                    }
            }
            else if(st[i] == 'R')
            {
                for(ll j = 9 ; j >= 0 ; j--)
                    if(ar[j] == 0)
                    {
                        ar[j]++;
                        break;
                    }
            }
            else
            {
                ll t = st[i] - '0';
                ar[t]--;
            }
        }

        for(ll i = 0; i < 10; i++)
            cout << ar[i];
        cout << endl;



    }
    return 0;
}


