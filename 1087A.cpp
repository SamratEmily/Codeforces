#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    string st , ans;
    cin >> st;

    int len  = st.size();
    int fr = 0 , bc = len - 1;
    if(len % 2)
    {
        while(ans.size()!=len)
        {
            ans += st[fr++];
            if(ans.size()!=len)
            ans += st[bc--];
        }
    }
    else
    {
        while(ans.size()!=len)
        {
            ans += st[bc--];
            if(ans.size()!=len)
            ans += st[fr++];
        }
    }

    reverse(ans.begin() ,ans.end()) ;
    cout << ans << endl;

    return 0;

}
