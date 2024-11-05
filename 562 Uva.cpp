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
int K[25000+5];

int knapSack(int W, int wt[], int n)
{
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = W; j > 0; j--)
        {
            if(wt[i]<= j)
                K[j] = max(K[j], wt[i] + K[j - wt[i]]);
        }
    }

    return K[W];
}



int main()
{
    int query;
    cin >> query;

    while (query--)
    {
        int n;
        cin >> n;

        int ar[n+5];

        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }

        int res = sum - 2*(knapSack(n, ar, sum/2));

        cout << res << endl;
    }


    return 0;
}

