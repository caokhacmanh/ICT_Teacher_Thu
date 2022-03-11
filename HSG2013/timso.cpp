#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional


//funcs
bool checkPrime(int a){
    if(a==2) return true;
    if(a<2) return false;
    for(int i = 2; i <= sqrt(a); ++i){
        if(a%i==0) return false;
    }
    return true;
}

int reverse(int a){
    int r = 0;
    while(a > 0){
        r *= 10;
        r += a%10;
        a /= 10;
    }
    // cout << r;
    return r;
}

int main(){
    freopen("timso.inp", "r", stdin);
    freopen("timso.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = n; i <= k; ++i){
        if(checkPrime(reverse(i))) cout << i << "\n";
        // cout << checkPrime(reverse(i)) << "\n";
    }
}