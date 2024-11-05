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
        ll n;
        cin >> n;

        ll div3 = (n / 3);
        ll rem3 = (n % 3);

        if(rem3 == 0)
        {
            cout << div3 << " 0 0\n";
        }
        else if(rem3 == 1 && div3 >= 2)
        {
            cout << (div3-2) << " 0 1\n";
        }
        else if(rem3 == 2 && div3 >= 1)
        {
            cout << (div3-1) << " 1 0\n";
        }
        else cout << -1 << endl;



    }
    return 0;
}


