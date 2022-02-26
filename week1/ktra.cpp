// code written & optimized by Defler Sir.
#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = 0;

// optional


// funcs


int main(){
    freopen("ktra.int", "r", stdin);
    freopen("ktra.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i <= n*k; ++i){
        cin >> tmp;
        ans += (tmp == 0);
    }
    if(ans >= (n * k + ((n * k) % 2) / 2)) cout << "Dung la ma tran thua";
    else cout << "Khong phai la ma tran thua";
}