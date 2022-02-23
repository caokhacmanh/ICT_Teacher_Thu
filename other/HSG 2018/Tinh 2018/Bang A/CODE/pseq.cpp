#include <fstream>
#include <algorithm>

using namespace std;

const int maxN = 100000 + 5;

ifstream fi;
ofstream fo;

int n, k;
int a[maxN], c[maxN], d[maxN], vt[maxN];
long long kq;

int nhap()
  {
    fi >> n >> k;       
    for (int i = 1; i <= n; i++) fi >> a[i];
  }
  
bool comp(int x, int y)  
  {
    return a[x] < a[y];            
  }
  
int chbi()
  {
    a[0] = 0;
    for (int i = 1; i <= n; i++) 
      {
        a[i] += a[i - 1];
        vt[i] = i;
      } 
    vt[0] = 0;
    
    sort(vt, vt + n + 1, comp);
    
    int p = 0;
    c[vt[0]] = 0; 
    for (int i = 1; i <= n; i++)
      {
        if (a[vt[i]] > a[vt[i - 1]]) p++;
        c[vt[i]] = p;
      } 
  }
  
int search(int p)
  {
    int l = 0, r = n;    
    while (r - l > 1)   
      {
        int mid = (l + r) / 2; 
        if (a[vt[mid]] == p) return c[vt[mid]];
        else if (a[vt[mid]] < p) l = mid; else r = mid;        
      }
    if (a[vt[l]] == p) return c[vt[l]];
    if (a[vt[r]] == p) return c[vt[r]];
    return -1;
  }
  
int xuli()
  {
    memset(d, 0, sizeof(d));
    d[c[0]] = 1;
    kq = 0;
    
    for (int i = 1; i <= n; i++)
      {
        int p = search(a[i] - k);     
        if (p >= 0) kq += d[p];
        d[c[i]]++;           
      }
              
  }
  
int inkq()
  {
    fo << kq;        
  }
  
int main()
  {
    char INPUT[]  = "00.";
    char OUTPUT[] = "00.a";
    
    for (int i = 1; i <= 20; i++)
      {
        INPUT[0] = i / 10 + 48;
        INPUT[1] = i % 10 + 48;
        OUTPUT[0] = i / 10 + 48;
        OUTPUT[1] = i % 10 + 48;        
        fi.open(INPUT);
        fo.open(OUTPUT);
        nhap();
        chbi();
        xuli();
        inkq();
        fi.close();
        fo.close();
      }        
  }
