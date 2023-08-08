#include<bits/stdc++.h>

using namespace std;
map<string, string> mp;

int main()
{
    int n;
    cin>>n;

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        string s1,s2;
        cin>>s1>>s2;

        if(mp[s1] == "\0")
        {
            mp[s1] = s2;
            cnt++;
        }

    }
    cout << cnt <<endl;

    return 0;
}
