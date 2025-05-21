#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double ans = (x * y) / 100.0;  // Calculate percentage correctly

    printf("%.2lf\n", ans);
    return 0;
}