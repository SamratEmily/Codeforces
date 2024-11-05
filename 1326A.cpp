#include<bits/stdc++.h>

using namespace std;


int main()
{
    int query;
    cin >> query;
    while(query--)
    {
        int n;
        cin >> n;

        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        cout << 2 ;
        for(int i = 2; i <= n ; i++)
            cout << 7;
        cout << endl;
    }


    return 0;
}

