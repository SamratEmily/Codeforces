#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int r, g, b, w;

        cin >> r >> g >> b >> w;
        int odd = 0;

        if(r % 2)
            odd++;
        if(g % 2)
            odd++;
        if(b % 2)
            odd++;

        if(odd == 0 || odd == 3)
        {
            cout << "Yes" << endl;
            continue;
        }
        if(odd == 1)
        {
            if(w % 2)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else if(r >= 1 && g >= 1 && b >= 1)
        {
            if(w % 2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;

    }
    return 0;
}
