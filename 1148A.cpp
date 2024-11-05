#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll a , b , c;
    cin >> a >> b >> c;

    ll sum = (c * 2);
    ll mn = min(a , b);

    sum += (mn * 2);

    if(a != b) sum++;

    cout << sum << endl;


    return 0;
}



