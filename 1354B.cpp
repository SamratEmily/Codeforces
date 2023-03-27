#include<bits/stdc++.h>
#define intMX  123456789
using namespace std;

string st;

int main()
{
    int query;
    cin >> query;

    while(query--)
    {
        cin >> st;
        len = st.size();

        int one = -1 , two = -1 , three = -1;
        int mn = intMx;

        for(int i = 0 ; i < len ; i++)
        {
            if(st[i] == '1') one = i;
            else if(st[i] == '2') two = i;
            else three = i;


        }
}
