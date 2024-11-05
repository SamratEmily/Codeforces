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
    int t;
    cin >> t;

    while( t-- )
    {
        int n, a, b;
        cin >> n >> a >> b;

        string st =  "";

        int quo = n / b;
        int rem = n % b;
        string s = "";
        for(char i = 'a'; i < 'a' + b; i++)
            s+=i;
        for(int i = 1; i <= quo; i++) st += s;

        for(char i = 'a'; i < 'a' + rem; i++) st += i;

        cout << st << endl;
    }
    return 0;
}

