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

    while(tc--)
    {
        string st;
        cin >> st;

        if(st == "0")
        {
            cout << 0 << endl;
            return 0;
        }
        ll cnt = 0;
        ll len = st.size();
        for(ll i = 0; i < st.size() ; i++)
        {
            if(st[i] == '1')
            {
                cnt++;
            }
        }
        ll ans = (len+1)/2;

        if(cnt==1 && len%2 == 1) ans--;

        cout << ans << endl;

    }
    return 0;
}

