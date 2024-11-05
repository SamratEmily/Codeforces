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
        ll l1 ,l2, r1 , r2;
        cin >> l1 >> r1 >> l2 >> r2;

        ll num = min(l1 , r1);
        ll num2 = max(l2 , r2);

        if(num == num2)
        {
            cout << max(l1 , r1) << ' ' << min(l2 , r2) << endl;
        }
        else cout << num << ' ' << num2 << endl;
    }
    return 0;
}


