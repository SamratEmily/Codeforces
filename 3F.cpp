#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n[5];
    cin>>n[0]>>n[1]>>n[2];

    int x[5];
    cin>>x[0]>>x[1]>>x[2];

    int res = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j <3 ; j++)
            if(n[i]==x[j])
            {
                res++;
                x[j] = -1;
                break;
            }
    }
    if(res >= 2)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;

}
