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
        ll n, m;
        cin >> n >> m;

        ll ar[2][2];
        ll on = 0, to = 0;
        for(ll i = 0; i < n ; i++)
        {
            for(ll j = 0; j < 2 ; j++)
                for(ll k = 0; k < 2 ; k++)
                    cin >> ar[j][k];

            if(ar[1][0] == ar[0][1])
            {
                to++;
//                if(ar[0][0] == ar[1][0])
//                    on++;
            }
        }

        if(m % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }

//        if(m == 2)
//        {
//            if(on >= 1)
//                cout << "YES\n";
//            else
//                cout << "NO\n";
//
//            continue;
//        }

        if(to >= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


