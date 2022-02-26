#include <bits/stdc++.h>
using namespace std;

// neccessary
int n = 0, k = 0, ans = 0, ins = 0, tmp = 0, run = 0;
bool chk = false;

// optional
string s;
char srr[100005];
pair<char, int> times[100005];
int srrLength;

// funcs


int main(){
    // freopen("dem_chu.inp", "r", stdin);
    // freopen("dem_chu.out", "w", stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    getline(cin, s);
    for(int i = 0; i < s.length() - ins; ++i){
        ins += (s[i+ins] == ' ');
        srr[i] = s[i+ins];
    }
    srrLength = s.length() - ins;
    for(int i = 0; i < srrLength; ++i){
        srr[i] = toupper(srr[i]);
    }
    sort(srr - 1, srr + srrLength);
    for(int i = 0; i < srrLength; ++i){
        if(srr[i] == srr[i+1]){
            ++tmp;
        }else{
            if(tmp == 0) cout << srr[i] << "\n";
            else tmp = 0;
        }
    }

}