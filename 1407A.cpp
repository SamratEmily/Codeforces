#include<bits/stdc++.h>

#define ll              int
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
        ll x;

        ll o = 0, z = 0;
        for(ll i =0 ; i < n ; i++)
        {
            cin >> x;

            if(x == 1)
            {
                o++;
            }
            else
                z++;
        }

        if(o % 2 && (o > z) )
            o--;

        cout << max(o, z) << endl;
        if(o > z)
        {

            for(int i = 0 ; i < o ; i++)
                cout << "1 ";

            cout << endl;
        }
        else
        {
            for(int i = 0; i < z ; i++)
                cout << "0 ";
            cout << endl;
        }

    }
    return 0;
}


