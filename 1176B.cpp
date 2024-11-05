#include<bits/stdc++.h>
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define ll long long

using namespace std;
int main()
{
    int t;
    cin >> t;

    while( t-- )
    {
        int n;
        cin >> n;


        int one = 0,two = 0, three = 0;
        int x;
        for(int i = 0; i < n ; i++)
        {
            cin>> x;

            if (x % 3 == 0)
                three++;

            else if(x % 3 == 1)
                one++;
            else if(x % 3 == 2)
                two++;

        }

        if(two>=one)
        {
            three += one ;
            two -= one;

            three += (two/3);
        }
        else
        {
            three += two;
            one -= two;

            three += (one/3);
        }

        cout << three << endl;

    }

    return 0;
}
