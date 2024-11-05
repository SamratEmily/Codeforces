#include<bits/stdc++.h>

#define ll              long long int


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
        ll a , b;
        cin >> a >> b;

        ll dif = abs(a - b);
        ll ans = ceil(dif / 10.0);

        cout << ans << endl;

    }
    return 0;
}


