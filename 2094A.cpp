#include "bits/stdc++.h"

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st; cin >> st;

        string ans = "";
        ans += st[0];

        for(int i = 2; i < st.size(); i++) {
            if(st[i-1] == ' ') {
                ans += st[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}