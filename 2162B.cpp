#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string st;
        cin >> st;
        
        vector<int> ans;

        int i = 0;
        while( st[i] == '0' ) {
            ans.push_back(i+1);
            i++;
        }
        while (st[i] == '1')    
        {
            ans.push_back(i+1);
            i++;
        }

        cout << ans.size() << endl;
        for (int  i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}