#include<bits/stdc++.h>

#define ll              long long int

using namespace std;


int main()
{
    ll tc = 1;
    cin >> tc;

    while(tc--)
    {

        ll n, a, b,c,d;

        cin >> a >> b >> c >> d;

        cout << max(a+b , c+d) << endl;

    }
    return 0;
}


