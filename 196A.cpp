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
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))



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
        //ll n;
        string st;
        cin >> st;

        string ans = "";
        string tmp = st;

        SORT_UNIQUE(tmp);

        //cout << tmp << endl;
        ll j = 0;
        ll in = j;
        for(ll i = tmp.size()-1 ; i >= 0; i--)
        {
            j = in;
            while(j < st.size())
            {
                if(st[j] == tmp[i])
                {
                    ans += tmp[i];
                    in = j;
                }
                j++;
            }

        }
        cout << ans << endl;


    }
    return 0;
}


