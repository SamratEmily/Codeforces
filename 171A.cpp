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
#define intMX           __builtin_infd32()
#define Vout(v)         for(auto it: v)cout<<it<<' '; cout<<endl;
#define Vin(v)          for(auto &it: v)cin>>it;

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--)
    {
        int m , n;
        cin >> m >> n;

        int neo = 0;

        while(n)
        {
            neo = neo*10 + n%10;
            n /= 10;
        }
        cout << (m+neo) << endl;
    }
    return 0;
}

