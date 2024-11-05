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

        ll cnt = 0;
        for(ll i = 0; i < (n-1) ; i++)
        {
            if(st[i] == st[i+1])
            {
                cnt++;
                if(st[i] == 'R')
                {
                    if(st[i+2] == 'B')
                    st[i+1] = 'G';
                    else st[i+1] = 'B';

                }
                else if(st[i] == 'G')
                {

                    if(st[i+2] == 'R' && (i+2) < n)
                    st[i+1] = 'B';
                    else st[i+1] = 'R';

                }
                else
                {

                    if(st[i+2] == 'R' && (i+2) < n)
                    st[i+1] = 'G';
                    else st[i+1] = 'R';

                }

            }
        }

        cout << cnt << endl;

        cout << st << endl;




    }
    return 0;
}


