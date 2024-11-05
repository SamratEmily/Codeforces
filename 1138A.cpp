#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v, ans;
    int x;
    for(int i = 0;  i < n ; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int same = 1;
    for(int i = 0 ; i < n-1 ; i++)
    {

        if(v[i] == v[i+1])
        {
            same++;
        }
        else
        {
            ans.push_back(same);
            same = 1;
        }
    }
    ans.push_back(same);

    int res = 0;
    for(int i = 0; i < ans.size()-1; i++)
    {
        int mn = min(ans[i], ans[i+1]) ;

        res = max(res, mn);

        // cout << ans[i] << ' ' << ans[i+1] << endl;
    }

    cout << (res * 2) << endl;




    return 0;
}
