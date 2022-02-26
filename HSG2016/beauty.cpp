#include <bits/stdc++.h>
using namespace std;

// neccessary
long long n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional 
long long nrr[200002];
long long ctn[200002];

// funcs
long long getSumPow(long long inp){
    long long r = 0;
    while(inp > 0){
        r += pow(inp % 10, 2);
        inp /= 10;
    }
    return r;
}

bool checkPrime(long long inp){
    for(long long i = 2; i <= sqrt(inp); i++){
        if(inp % i == 0) return 0;
    }
    return 1;
}

int main(){
    // bài này em làm phải biết số test trước ạ, còn test mẫu trong đề thì họ không cho biết trước số test case :(

    freopen("beauty.inp", "r", stdin);
    freopen("beauty.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> k;
    long long maxo = -9999999;
    for(long long t = 0; t < k; ++t){
        cin >> nrr[t];
        maxo = max(maxo, nrr[t]);
    }
    
    for(long long t = 11; true; ++t){
        if(checkPrime(getSumPow(t))){
            ctn[tmp] = t;
            // cout << ctn[tmp] << " ";
            ++tmp;
        }
        if(tmp >= maxo) break;
    }
    for(long long t = 0; t < k; ++t){
        cout << ctn[nrr[t]-1] << "\n";
    }
}