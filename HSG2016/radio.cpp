#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional 
string s, subS;

// funcs


int main(){
    freopen("radio.inp", "r", stdin);
    freopen("radio.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    for(int t = 1; t <= s.length(); ++t){
        chk = false;
        for(int i = 0; i < s.length() - t; ++i){
            if(s[i] != s[i+t]){
                chk = true;
                break;
            }
        }
        if(!chk){
            cout << t;
            return 0;
        }
        // cout << t << "i\n";
    }
}