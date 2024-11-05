#include<bits/stdc++.h>

#define ll              long long int


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        ll br[n+2];
        for(int i = 0; i < n; i++) cin >> br[i];

        for(int i = n-1 ; i >=0 ; i--) cout << br[i] << ' ';

        cout << endl;
    }
    return 0;
}


