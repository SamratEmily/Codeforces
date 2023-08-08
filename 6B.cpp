#include<bits/stdc++.h>

#define ll   long long int

using namespace std;
ll fun(ll n,ll k )
{
    if(n == 1)
        return k;

    return (k * fun(n-1, k));
}

int main()
{
    ll n, k;
    cin >> n >> k;

    ll ans = k;
    ans *= fun(n-1, k-1);

    cout << ans << endl;

    return 0;
}


