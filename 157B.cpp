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

bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    cin >> n;

    double ar[n+2];

    for(int i = 0; i < n ; i++) cin >> ar[i];

    sort(ar,ar+n,cmp);

    double sum1 = 0, sum2 = 0;
    for(int i = 0; i < n ; i++)
    {
        if(i%2) sum2+= (PI*ar[i]*ar[i]);
        else sum1+= (PI*ar[i]*ar[i]);
    }
    printf("%.10lf\n",sum1 - sum2);
    return 0;
}

