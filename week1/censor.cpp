#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ins = 0, run = 0, tmp = 0, ans = 0;
bool chk = false;

// optional 
string s, subS;

// funcs
void deleteS(int j){
    for(int i = j; i < s.length() - subS.length(); ++i){
        s[i] = s[i+subS.length()];
    }
    for(int i = s.length() - subS.length(); i < s.length(); ++i){
        s[i] = 32;
    }
}

int main(){
    freopen("censor.inp", "r", stdin);
    freopen("censor.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> s >> subS;
    for(int i = 0; i < s.length() - subS.length(); ++i){
        chk = false;
        for(int j = 0; j < subS.length(); ++j){
            if(s[i+j] != subS[j]){
                chk = true;
                break;
            }
        }
        if(!chk){
            deleteS(i);
            i = 0;
        }
    }
    cout << s;
}