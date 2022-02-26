#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional 
int arr[500002];
int mino = 99999999, maxo = -99999999;

// funcs


int main(){
    freopen("norma.inp", "r", stdin);
    freopen("norma.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> k;
    for(int i = 0; i < k; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i < k; ++i){
        for(int j = i; j < k; ++j){
            mino = 99999999;
            maxo = -99999999;
            for(int l = i; l <= j; ++l){
                maxo = max(arr[l], maxo);
                mino = min(arr[l], mino);
            }
            // cout << mino << " * " << maxo << " * " << i+1 << " = " << mino*maxo*(j-i+1) << "\n";
            ans += mino*maxo*(j-i+1);
            ans = ans % 1000000000;
        }
    }
    cout << ans;
}