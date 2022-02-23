#include<bits/stdc++.h>
#define N 500
using namespace std;
int n;
string s;
int f[N][N], d[N], trace[N];
void out(int n)
	{
		if (trace[n] > 0)
			out(trace[n]);
		cout<<n<<'\n';
	}
int main()
{
    freopen("PALIN.inp","r",stdin);
    freopen("PALIN.out","w",stdout);
    ios::sync_with_stdio(0);
    cin>>n;
    cin>>s;
    s.insert(0," ");
    for (int i=1; i <= n; i++)
        f[i][i]=1;
    for (int i=1; i < n; i++)
        if (s[i] == s[i+1])
            f[i][i+1]=1;
    for (int len=3; len <= n; len++)
        for (int i=1; i <= n-len+1; i++)
            {
                int j=i+len-1;
                if ((s[i] == s[j])&&(f[i+1][j-1] == 1))
                    f[i][j]=1;
            }
    for (int i=1; i <= n; i++)
        if (f[1][i] == 1)
            d[i]=1;
    for (int i=1; i <= n; i++)
        {
            if (d[i] == 0)
                d[i]=n+1;
            for (int j=1; j <= i; j++)
                if (f[j][i] == 1)
                    {
                    	if (d[i] > d[j-1]+1)
                    		trace[i]=j-1;
						d[i]=min(d[i],d[j-1]+1);
					}
        }
    cout<<d[n]<<'\n';
    out(n);
    return 0;
}

