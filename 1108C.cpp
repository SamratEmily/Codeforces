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

    ll tc = 1;
    //cin >> tc;

    while(tc--)
    {
        ll n;
        cin >> n;

        string st;
        cin >> st;

        ll cnt = 0;

        map<ll, char > m;
        m[1] = st[0];
        m[2] = st[1];
        m[3] = st[2];

        if(m[1] == m[2] && m[2] == m[3])
        {
            cnt += 2;
            m[1] = 'R';
            m[2] = 'B';
            m[3] = 'G';

            st[0] = 'R';
            st[1] = 'B';
            st[2] = 'G';
        }
        else if(m[1] == m[2])
        {
            cnt++;

            if(m[3] == 'G')
            {
                if(m[1] == 'B')
                    m[2] = 'R', st[1] = 'R' ;
                else
                    m[2] = 'B', st[1] = 'B' ;


            }
            else if(m[3] == 'B')
            {

                if(m[1] == 'G')
                    m[2] = 'R', st[1] = 'R' ;
                else
                    m[2] = 'G', st[1] = 'G' ;

            }
            else
            {

                if(m[1] == 'B')
                    m[2] = 'G', st[1] = 'G' ;
                else
                    m[2] = 'B', st[1] = 'B' ;

            }

        }
        else if(m[1] == m[3])
        {
            cnt++;

            if(m[2] == 'G')
            {
                if(m[1] == 'B')
                    m[3] = 'R', st[2] = 'R' ;
                else
                    m[3] = 'B', st[2] = 'B' ;


            }
            else if(m[2] == 'B')
            {

                if(m[1] == 'G')
                    m[3] = 'R', st[2] = 'R' ;
                else
                    m[3] = 'G', st[2] = 'G' ;

            }
            else
            {

                if(m[1] == 'B')
                    m[3] = 'G', st[2] = 'G' ;
                else
                    m[3] = 'B', st[2] = 'B' ;

            }

        }
        else if(st[1] == st[2])
        {
            cnt++;
            if(m[2] == 'G')
                m[3] = 'B', st[2] = 'B';
            else if(m[2] == 'B')
                m[3] = 'R', st[2] = 'R' ;
            else
                m[3] = 'G', st[2] = 'G' ;

        }

        for(ll i = 3; i < n ;i++)
        {
            ll t = (i % 3 + 1);
            if(m[t] != st[i])
            {
                cnt++;
                st[i] = m[t];
            }
        }

        cout << cnt << endl;
        cout << st << endl;


    }
    return 0;
}


