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
const int p = 5;
int mod(int a, int n)
{
    int res = 1;

    while(n != 0)
    {
        if(n%2)
        {
            res = (res * a) % p;
            n--;
        }
        else
        {
            a = (a * a) % p;
            n = n / 2;
        }
    }

    return res ;
}

int num(int a, string st)
{
    int res = 1;
    int newnum = a;

    for(int i = (st.size() -1); i >= 0 ; i--)
    {
        res = (res * mod(newnum , st[i]-'0')) % p;

        newnum = mod(newnum , 10 );
    }

    return res ;
}

int main()
{
    string st;
    cin >> st;

    int ans = num(1 , st ) + num(2 , st ) + num(3 , st ) + num(4 , st ) ;

    cout << ans % p << endl;
    return 0;
}

