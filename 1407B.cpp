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
#define outv(v)         for(auto it:v)cout<<it<<' ';cout<<nl;



using namespace std;

bool cmp(ll a  , ll b)
{
    if(a > b) return true;

    return false;
}

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

        ll ar[n+2];

        for(int i = 0; i < n ; i++)
        {
            cin >> ar[i];
        }

        sort(ar , ar + n , cmp);

//        for(int i = 0; i < n ; i++) cout << ar[i] << ' ' ;
//        cout << endl;

        ll num = 0;

        for(int i = 0 ; i < n ; i++)
        {
            ll ing = -1;
            ll mxg = 0;
            for(int j = 0 ; j < n ; j++)
            {
                if(ar[j] != -1)
                {
                    if(gcd(num , ar[j]) > mxg)
                    {
                        mxg = gcd(num , ar[j]);
                        ing = j;
                    }
                }
            }
            cout << ar[ing] << ' ';
            num = mxg;
            ar[ing] = -1;
        }
        cout << endl;


    }
    return 0;
}


