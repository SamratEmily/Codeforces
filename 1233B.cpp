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
    cin >> tc;

    while(tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        ll ar[105];
        mSet(ar,0);

        for(int i = 0; i < s1.size() ; i++)
        {
            ll t = s1[i] - '0';
            ar[t]++;
        }
        bool flag = false;

        for(int i = 0; i < s2.size() ; i++)
        {
            ll t = s2[i] - '0';

            if(ar[t] >= 1)
            {
                flag = true  ;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";


    }
    return 0;
}


