// code written & optimized by Defler Sir.
#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, ans = 0, run = 0, tmp = 0;
bool chk = 0;

// optional


// funcs
bool checkPrime(int inp){
    if(inp == 2) return true;
    for(int i = 2; i <= sqrt(inp); ++i){
        if(inp % i == 0) return false;
    }
    return true;
}

int main(){
    freopen("timnghiem.int", "r", stdin);
    freopen("timnghiem.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for(int x = 2; x < n - 2; ++x){
        for(int y = x; y < n - 1; ++y){
            if(checkPrime(x) == true && checkPrime(y) == true && checkPrime(n - y - x) == true){
                cout << x << " " << y << " " << n - x - y << "\n";
            }
        }
    }
    cout << "0 0 0\n";
}