#include<iostream>

using namespace std;

int cnt = 1;
void fun(int n) {
    if(n == 0) return;
    cout << "I love Recursion" << endl;
    fun(n-1);
}
int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;

        fun(n);
    }

    return 0;
}