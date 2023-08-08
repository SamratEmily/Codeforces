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

struct Dragon
{
    int str, bon;
};

bool operator<(Dragon a, Dragon b)
{
    if(a.str != b.str) return a.str < b.str; //2 < 3 = 1, 3 < 2 = 0

//    2 3
//    2 1
//
//    2 1
//    2 3

    return a.bon < b.bon;
}




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--)
    {
        int s, n;
        cin >> s >> n;

        Dragon ar[n+2];

        for(int i = 0; i < n; i++)
        {
            cin >> ar[i].str >> ar[i].bon;
        }
        sort(ar, ar+n);

//        2 2
//        1 99
//        100 0
//
//        10 1
//        100 100
//        5 4
//
//        1 1
//        3 4
//        5 5
//        10 4
//
//        5 4
//
//        10 4
//        3 4
//        1 1
//        5 5


        int flag = 0;

        for(int i = 0; i < n; i++)
        {
            if(s > ar[i].str) s += ar[i].bon;
            else
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}


