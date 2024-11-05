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
        string st;
        cin >> st;

        int len = st.size();

        if(st[0] == st[len-1])
        {
            cout << "NO\n";
            continue;
        }
        vector<string> v;
        v.pb("001")
        v.pb("010")
        v.pb("011")
        v.pb("100")
        v.pb("101")
        v.pb("110")

        bool f = false;
        string tmp = "AB"
        for(int bi = 0 ; bi < v.size() ; bi++)
        {
             for(int i = 0 ; i < v[bi].size() ; i++)
             {
                 if(v[bi][i] == '0')

             }
        }

        if(f) cout << "YES\n";
        else cout << "NO\n";




    }
    return 0;
}


