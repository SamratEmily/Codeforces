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
    string s1 , s2 ;
    getline(cin , s1);
    getline(cin , s2);

    int cnt1 = 0 , cnt2 = 0;

    for(int i = 0; i < s2.size() ; i++)
    {
        if(s2[i] == ' ') cnt1++;
        else
        {
            int t = s1.find(s2[i]);

            if(t >=0 && t < s1.size()) cnt2++ , s1[t] = '0';

        }
    }
    int tot = cnt1 + cnt2;
    if(tot == s2.size()) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}

