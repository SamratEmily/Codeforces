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
#define inV(v) for(auto &it:v)cin>>it;

using namespace std;

string st, h;

string makest(ll a, ll b)
{
    string s = "";

    for(ll i = a; i <= b ; i++)
        s += h[i];


    return s;
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
        cin >> st >> h;

        ll f = 0;
        ll l1 = h.size();
        ll l2 = st.size();
        map<char , ll> m1 , m2;
        m1.clear();
        for(ll i = 0; i < l2 ; i++)
        {
            m1[st[i]]++;
        }
        for(ll i = 0; i <= (l1 - l2 ); i++)
        {
            string s = makest(i, i+l2-1);

            map<char , ll> tm;
            tm.clear();
            for(ll j = 0; j < l2 ; j++)
            {
                tm[s[j]]++;
            }

            ll cnt = 0;
            for(ll j = 0; j < l2 ; j++)
            {
                if(m1[st[j]]){
                        cnt++;

                }
            }

            if(cnt == l2)
            {
                f = 1;
                break;
            }
        }

        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";


        st.clear();
        h.clear();

    }
    return 0;
}


