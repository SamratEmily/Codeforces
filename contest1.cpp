#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double ans = (y* 100)/(100-x);

    printf("%.2lf\n", ans);
    return 0;
}