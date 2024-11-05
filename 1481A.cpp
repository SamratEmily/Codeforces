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
    cin >> tc;

    while(tc--)
    {
        ll m, n;
        cin >> m >> n;

        string st;
        cin >> st;
        ll l = 0, r = 0, u = 0, d = 0;
        if(m > 0)
            r = m;
        else
            l = (-1) * m;


        if(n > 0)
            u = n;
        else
            d = (-1) * n;

        ll l1 = 0, r1 = 0, u1 = 0, d1 = 0;
        for(ll i = 0 ; i < st.size() ; i++)
        {
            if(st[i] == 'U')
                u1++;
            else if(st[i] == 'D')
                d1++;
            else if(st[i] == 'L')
                l1++;
            else
                r1++;
        }

        if(l1 >= l && r1 >= r && u1 >= u && d1 >= d)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
    return 0;
}


