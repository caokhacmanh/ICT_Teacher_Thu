#include<bits/stdc++.h>
using namespace std;
int d[200];
int check(int x)
    {
        int rs=0;
        for (int i=1; i <= x/2; i++)
            if (x%i == 0)
                rs+=i;
        return (rs == x);
    }
int cal(int x)
    {
        int rs=0;
        while (x > 0)
            rs+=x%10, x/=10;
        return rs;
    }
int main()
{
    freopen("PERFECT.inp","r",stdin);
    freopen("PERFECT.out","w",stdout);
    ios::sync_with_stdio(0);
    for (int i=1; i <= 100; i++)
        d[i]=check(i);
    int n;
    cin>>n;
    int res=0;
    while (n--)
        {
            int a;
            cin>>a;
            res+=d[cal(a)];
        }
    cout<<res;
    return 0;
}
