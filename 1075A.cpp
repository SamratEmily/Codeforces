#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll n;
    cin>>n;

    ll x,y;
    cin>>x>>y;

    ll white = max((x - 1), (y - 1));
    ll black = max((n - x), (n - y));

    //cout << white << ' ' << black <<endl;

    if(white <= black)
        cout << "White" <<endl;
    else
        cout << "Black" <<endl;

    return 0;
}
