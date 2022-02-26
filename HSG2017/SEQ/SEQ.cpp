#include<bits/stdc++.h>
#define N 100005
using namespace std;
int n,L,R;
long long s[N];
int main()
{
    freopen("SEQ.inp","r",stdin);
    freopen("SEQ.out","w",stdout);
    ios::sync_with_stdio(0);
    cin>>n>>L>>R;
    for (int i=1; i <= n; i++)
        {
            int a;
            cin>>a;
            s[i]=s[i-1]+a;
        }
    if (1LL*n*n <= 50000000)
        {
            long long res=0;
            for (int i=1; i <= n; i++)
                {
                    if (abs(s[i]) >= L && abs(s[i]) <= R)
                        res++;
                    for (int j=1; j < i; j++)
                        {
                            long long a=abs(s[i]-s[j]);
                            if (a >= L && a <= R)
                                res++;
                        }
                }
            cout<<res;
            return 0;
        }
    s[++n]=0;
    sort(s+1,s+1+n);
    int l=1, r=1;
    long long res=0;
    for (int i=2; i <= n; i++)
        {
            while (l <= i && abs(s[i]-s[l]) >= L)
                l++;
            if (l > 1 && abs(s[i]-s[l]) < L)
                l--;
            while (r <= i && abs(s[i]-s[r]) > R)
                r++;
            if (abs(s[i]-s[l]) >= L && abs(s[i]-s[r]) <= R)
                res+=l-r+1;
        }
    cout<<res;
    return 0;
}
