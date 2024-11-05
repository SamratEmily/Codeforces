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

ll make_num1(vector< pll > v )
{
    ll num = 0;

    for(ll i = 0; i < v.size() ; i++)
    {
        num = (num*10) + v[i].first;
    }

    return num;
}
ll make_num2(vector< pll > v )
{
    ll num = 0;

    for(ll i = 0; i < v.size() ; i++)
    {
        num = (num*10) + v[i].second;
    }

    return num;
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
        ll n;
        cin >> n;

        vector< pair<ll, ll> > v, v2;

        string s1, s2 ;
        cin >> s1 >> s2;

        ll red = 0 , blue = 0;
        for(ll i = 0; i < n ; i++)
        {
            ll a = s1[i] - '0';
            ll b = s2[i] - '0';

            if(a > b) red++;
            else if(b > a) blue++;

        }

//        sort(all(v));
//        reverse(all(v));
//        sort(all(v2));
//        reverse(all(v2));
//
////        for(ll i = 0; i < n ; i++)
////            cout << v2[i].first << ' ' << v2[i].second << endl;
//
//        ll a = make_num1(v);
//        ll b = make_num2(v);
//        ll c = make_num1(v2);
//        ll d = make_num2(v2);

        if(red == blue)
            cout << "EQUAL\n";
        else if(blue > red)
            cout << "BLUE\n";
        else
            cout << "RED\n";



    }
    return 0;
}


