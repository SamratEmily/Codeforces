#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define ll long long
#define Vin(v) for(auto &x : v) cin >> x;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
       int n;
       cin >> n;
       string a;
       cin >> a;

       int m;
       cin >> m;
       string b,c;
       cin >> b >> c;

       string s1 = "", s2 = "";
        int i = 0, j = m-1;
       for (int i = 0; i < m; i++) {
           if( c[i] == 'D' ) {
               s1 += b[i];
               i++;
           } else {
               s2 += b[j];
               j--;
           }
       }

       reverse(s1.begin(), s1.end());

       cout << s1+a+ s2 << endl;
    }
}