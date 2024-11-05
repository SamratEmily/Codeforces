    #include<bits/stdc++.h>

    #define ll              long long int
    #define ull             unsigned long long int
    #define vl              vector<ll>
    #define all(v)          v.begin(),v.end()
    #define pb              push_back

    #define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
    #define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
    #define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)


    using namespace std;

    int main()
    {
        ll t, T;
        T = 1;
        cin >> T;
        RUN_CASE(t,T)
        {
            ll n;
            cin >> n;

            vector<ll> v;
            ll i, x;

            rep(i, 0, n-1)
            {
                cin >> x;

                v.pb(x);
            }

            ll tmp = v[0] + v[1];

            if(tmp <= v[n-1])
            {
                cout << "1 2 " << n << endl;

                continue;
            }

            cout << -1 << endl;

        }

        return 0;
    }


