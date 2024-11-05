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

        string s1 , s2;
        cin >> s1 >> s2;

        ll l1 = s1.size() , l2 = s2.size();

        ll ans1 = lcm(l1 , l2) / l1;
        ll ans2 = lcm(l1 , l2) / l2;

        if(ans1 == ans2)
        {
            for(ll i = 0; i < lcm(l1 , l2);i++) cout << s2[i];
        }
        else cout << -1 << endl;

    }
    return 0;
}


