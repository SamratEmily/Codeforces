#include<bits/stdc++.h>
#define ll long long
#define lcm(a,b) (a*(b/__gcd(a,b)))

using namespace std;
int main()
{
    ll n;
    cin>>n;

    ll mx_a=0,mn_b=n;
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            ll res=lcm(i,n/i);

            if(res==n)
            {
                mx_a=max(mx_a,i);
                mn_b=min(mn_b,n/mx_a);
            }
        }
    }

    cout<<mx_a<<' '<<mn_b<<endl;

    return 0;
}
