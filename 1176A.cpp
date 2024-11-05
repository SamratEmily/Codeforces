#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int q;
    cin >> q;

    while( q-- )
    {
        ll n;
        cin >> n;

        ll res = 0;
        while(n!=1)
        {

            if(n%2==0)
                n/=2;
            else if(n%3==0)
                n = (2*n)/3;
            else if (n % 5 == 0)
                n = (4 * n) / 5;

            else
            {
                res = -1;
                break;
            }

            res ++ ;
        }
        cout << res << endl;
    }

    return 0;
}
