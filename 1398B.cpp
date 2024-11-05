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
        string st;

        cin >> st;

        vl v;

        ll len = 0;

        for(ll i =0 ; i < st.size() ; i++)
        {
            if(st[i] == '1')
            {
                len++;
            }
            else
            {
                if(len) v.pb(len);
                len = 0;
            }
        }

        if(len) v.pb(len);

        if(v.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sort(all(v));

        ll sum = 0;

        for(ll i = v.size()-1; i >= 0; i-= 2)
        {
            sum += v[i];
        }

        cout << sum << endl;

    }

    return 0;
}


