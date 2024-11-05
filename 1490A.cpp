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


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--)
    {
        int n;
        cin >> n;

        int ar[n+2];

        for(int i = 0; i < n ; i++)
            cin >> ar[i];

        int sum = 0;
        for(int i = 0; i < n-1 ; i++)
        {
            int m1 = min(ar[i], ar[i+1]);
            int m2 = max(ar[i], ar[i+1]);
            int cnt = 0;

            while((m1*2) < m2)
            {
                cnt++;
                m1 *= 2;
            }

            sum += cnt;
        }
        cout << sum << endl;

    }
    return 0;
}


