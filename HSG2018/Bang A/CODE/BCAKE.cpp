#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i= a; i<= b; i++)
#define FORD(i,a,b) for(int i= a; i>= b; i--)
#define For(i,a,b) for(int i= a; i< b; i++)
#define Ford(i,a,b) for(int i= a; i> b; i--)
#define FORE(i,v) for (__typeof((v).begin()) i=(v).begin();i!=(v).end();i++)
#define Fill(s,a) memset(s,a,sizeof(s));
#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef unsigned long long ull;

const int N = 100100;

ll n, r[N], h[N], a[N];
pair<double, int> s[N];
double bit[N], v[N], f[N], res = 0;

void update(int x, double w)
{
    while (x<= n)
    {
        bit[x] = max(bit[x],w);
        x+= x & (-x);
    }
}

double get(int x)
{
    double d = 0;
    while (x> 0)
    {
        d = max(d,bit[x]);
        x-= x & (-x);
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("bcake.in","r",stdin);
    freopen("bcake.out","w",stdout);
    scanf("%d",&n);
    FOR(i,1,n)
    {
        scanf("%lld%lld",&r[i],&h[i]);
        v[i] = M_PI * r[i] * r[i] * h[i];
        s[i] = mp(v[i],i);
    }
    sort(s+1,s+n+1);
    int cnt = 1;
    a[s[1].se] = 1;
    FOR(i,2,n)
    {
        if (s[i].fi != s[i-1].fi) cnt++;
        a[s[i].se] = cnt;
    }
    FOR(i,1,n)
    {
        f[i] = get(a[i]-1);
        f[i]+= v[i];
        res = max(res,f[i]);
        update(a[i],f[i]);
    }
    printf("%.3lf\n",res);
    return 0;
}
