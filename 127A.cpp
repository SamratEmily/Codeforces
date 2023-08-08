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
    int n,k;
    cin >> n >> k;

    double ar1[n+2], ar2[n+2];

//    ar1[0] = 0;
//    ar2[0] = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar1[i] >> ar2[i];
    }
    double totaltime = 0;
    for(int i  = 1; i < n; i++)
    {
        double num1 = ar1[i-1] - ar1[i];
        double num2 = ar2[i-1] - ar2[i];

        double dis = sqrt((num1*num1)+(num2*num2));
        totaltime += dis/50.0;

       // cout << num1 << ' ' << num2 << ' ' << totaltime << endl;
    }
    printf("%.10lf\n",totaltime*k);
    return 0;
}

