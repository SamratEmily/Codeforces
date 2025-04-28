#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;

        for(int i = 0; i < st.size(); i++)
        {
            if(st[i] == 'p') st[i] =  'q';
            else if(st[i] == 'q') st[i] = 'p';
        }

        cout << st << endl;
    }

    return 0;
}