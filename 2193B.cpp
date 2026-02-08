#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n), temp(n), ans(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        temp = a;
        sort(a.begin(), a.end(), greater<int>());

        int l = -1, r = -1, num;
        for(int i = 0; i < n; i++) {
            if(a[i] != temp[i]) {
                l = i;
                num = a[i];
                break;
            }
            ans[i] = a[i];
        }

        for(int i = n-1; i >= 0; i--) {
            if(num == temp[i]) {
                r = i;
                break;
            }
            ans[i] = a[i];
        }


        if (l != -1 && r != -1) {
            reverse(temp.begin() + l, temp.begin() + r + 1);
        }

        for(int i = 0; i < n; i++) {
            cout << temp[i] << " ";
        }

        cout << "\n";
    }
}