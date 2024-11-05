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
        string st;
        cin >> st;

        ll even = 0 , sumd = 0 , zero = 0;

        for(ll i = 0; i < st.size() ; i++)
        {
            ll num = st[i] - 48;
            if(num%2 == 0)
            {
                even++;
                if(num == 0) zero++;
            }

            sumd += num;
        }

        if(even >= 2 && zero >= 1 && sumd % 3 == 0)
            cout << "red\n";
        else cout << "cyan\n";



    }
    return 0;
}


