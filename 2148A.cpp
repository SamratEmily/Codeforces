#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        if(m%2==0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}