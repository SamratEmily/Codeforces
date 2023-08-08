#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n>=0)
        cout<<n<<endl;
    else
    {
        int num1 = n / 10;
        int num2 = (n / 100) * 10 + ( n % 10);

        if(num1 >= num2) cout << num1 << endl;

        else cout << num2 << endl;
    }

    return 0;
}
