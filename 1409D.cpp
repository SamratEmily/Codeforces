#include<bits/stdc++.h>

#define ll              long long int
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
    cin >> tc;

    while(tc--)
    {
        ll n , s;
        cin >> n >> s;

        ll m = n;
        ll digit = 0;
        ll sumd = 0;
        ll ar[20];

        while(m)
        {
            ll tmp = m % 10;
            sumd += tmp;
            ar[digit++] = tmp;
            m /= 10;
        }
        // Basic case
        if(sumd <= s)
        {
            cout << 0 << endl;
            continue;
        }

        // Main program
        ll sd = 0;
        for(ll i = digit-1; i >= 0; i--)
        {
            sd += ar[i];

            if(sd >= s)
            {
                ll in = i;
                ar[i] = 0;
                while(in < digit)
                {
                    in++;
                    if(in == digit)
                    {
                        ar[digit++] = 1;
                        break;
                    }
                    if(ar[in] < 9)
                    {
                        ar[in] += 1;
                        break;
                    }
                }

                while(--in >= 0)
                    ar[in] = 0;
                break;

            }
        }
//        for(ll i = 0; i < digit ; i++)
//            cout << ar[i] << ' ';
//        cout << endl;

    ll num = ar[digit-1];
    for(ll i = digit-2 ; i >= 0; i--)
    {
        num *= 10;
        num += (ar[i]);
    }

    ll ans = num - n;


        cout << ans << endl;
    }

    return 0;
}


