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
    ll tc = 1;
    cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        string st = "";

        ll f = 1;
        for(ll i = 0; i < n ; i++)
        {

            if(s[i] == '0')
            {
                f = 1;
                if(i == 0){
                    st += '1';
                    continue;
                }

                ll t2 = st[i-1] - '0';
                ll t1 = s[i-1] - '0';

                if((t1+t2) == 1)
                    st += '0';
                else
                    st += '1';
            }
            else if(s[i] == '1' && f)
            {
                st += '1';
                f = 0;
            }
            else
            {
                st += '0';
                f = 1;
            }
        }

        cout << st << endl;

    }
    return 0;
}


