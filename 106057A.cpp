#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<long long>> grid(n, vector<long long>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        bool possible = false;
        
        for (int bit = 0; bit < 64; bit++) {
            bool canSelect = true;
            
            for (int i = 0; i < n; i++) {
                bool hasBitSet = false;
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] & (1LL << bit)) {
                        hasBitSet = true;
                        break;
                    }
                }
                if (!hasBitSet) {
                    canSelect = false;
                    break;
                }
            }
            
            if (canSelect) {
                possible = true;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}