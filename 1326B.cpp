#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define intMX           2147483648
#define longINF         9223372036854775808
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define MOD             1000000007
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<ll> v, tmp,ans;
    ll x;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    tmp.push_back(0);
    ans.push_back(v[0]+0);
    ll sum = v[0];

   // cout << v[0] << ' ' << tmp[0] << ' ' <<ans[0] << endl;

    for(int i = 1; i < n ; i++)
    {

        x = ans[i-1];
        if(x > tmp[i-1])
            tmp.push_back(ans[i-1]);
        else
            tmp.push_back(tmp[i-1]);

        ans.push_back(v[i] + tmp[i]);

      // cout << v[i] << ' ' << tmp[i] << ' ' <<ans[i] << endl;

    }

    for(int i = 0; i < (int)ans.size() ; i++)
    {
        if(i>0)
            cout<<' ';
        cout<<ans[i];
    }

    cout << endl;

    return 0;
}

