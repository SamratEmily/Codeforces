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
    //cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        ll ar[n+2];

        for(int i = 0 ; i < n ; i++)
        {
            cin >> ar[i];
        }
        //sort(ar, ar + n);

        bool f1 = false, f2 = false;
        for(int i = 0; i < n ; i++)
        {
            if(ar[i] < 0)
            {
                if(ar[i] % 2)
                {
                    if(f1)
                    {
                        f1 = false;
                        ar[i] = (ar[i] - 1) / 2;
                    }
                    else
                    {
                        f1 = true;
                        ar[i] = ar[i] / 2;
                    }
                }
                else
                    ar[i] = (ar[i] / 2);
            }
            else
            {
                if(ar[i] % 2)
                {
                    if(f2)
                    {
                        f2 = false;
                        ar[i] = (ar[i] + 1) / 2;
                    }
                    else
                    {
                        f2 = true;
                        ar[i] = ar[i] / 2;
                    }
                }
                else
                    ar[i] = (ar[i] / 2);

            }
        }

        for(int i = 0; i < n ; i++)
            cout << ar[i] << endl;



    }
    return 0;
}


