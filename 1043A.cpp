#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int ar[n+5];

    int sum = 0;
    int mx = 0;
    for(int i = 0; i < n ; i++ )
    {
        cin>> ar[i];
        sum += ar[i];

        mx = max (mx, ar[i]);
    }

    int tmp = 0;
    for(int i = 0; i < n ; i++)
    {
        tmp += (mx - ar[i]);
    }
    int res = mx;
    while(tmp <= sum)
    {
        tmp += n;
        res ++;
    }

    cout << res << endl;

    return 0;
}
