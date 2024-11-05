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
    ll inM = 8001;

    while(tc--)
    {
        ll n, m;
        cin >> n >> m;

        ll ar[n+2][m+2];

        for(ll i = 0; i <= n+1; i++)
        {
            ar[0][i] = 0;
        }
        for(ll i = 0; i <= n+1 ; i++)
        {
            ar[i][0] = 0;
        }
        for(ll i = 0; i <= n+1; i++)
        {
            ar[i][m+1] = inM;
        }
        for(ll i = 0; i <= m+1 ; i++)
        {
            ar[n+1][i] = inM;
        }

        for(ll i = 1; i <= n ; i++)
            for(ll j = 1; j <= m ; j++)
                cin >> ar[i][j];


        bool flag = true;
        ll sum = 0;

        for(ll i = n ; i >= 1 ; i--)
        {
            for(ll j = m; j >= 1 ; j--)
            {
                if(ar[i][j] == 0)
                {
                    ll mn = min(ar[i+1][j], ar[i][j+1]);
                    mn--;
                    ll mx = max(ar[i-1][j], ar[i][j-1]);
                    mx++;

                    if(mn >= mx)
                    {
                        ar[i][j] = mn;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false)
                break;
        }
        for(ll i = 1; i <= n ; i++)
        {
            for(ll j = 1; j <= m ; j++)
            {
                if(ar[i][j] > ar[i-1][j] && ar[i][j] > ar[i][j-1])
                    sum += ar[i][j];
                else
                {
                    flag = false;
                    break;
                }
            }

            if(flag == false)
                break;

        }


        if(flag)
            cout << sum << endl;
        else
            cout << -1 << endl;

    }
    return 0;
}


