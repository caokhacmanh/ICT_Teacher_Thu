#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional


// funcs


int main(){
    // freopen("matran.inp", "r", stdin);
    // freopen("matran.out", "w", stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        tmp = 0;
        for(int j = 0; j < k; ++j){
            cin >> ins;
            cout << ins << " ";
            tmp += ins;
        }
        cout << tmp << "\n";
    }
}