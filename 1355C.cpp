#include<bits/stdc++.h>

using namespace std;

bool check(int mid)
{

}

int main()
{
    int a , b , c , d;
    cin >> a >> b >> c >> d;

    int lo = a , hi = d;
    while(hi > lo)
    {
        int mid = (hi + lo) / 2;

        if(check(mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << hi << endl;
}
