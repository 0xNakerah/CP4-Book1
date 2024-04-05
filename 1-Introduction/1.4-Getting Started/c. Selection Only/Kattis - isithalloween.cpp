//problem link: https://open.kattis.com/contests/zbitrk/problems/isithalloween

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
    string month; int day;
    cin >> month >> day;
    cout << ((month=="OCT"&&day==31)||(month=="DEC"&&day==25)?"yup":"nope") << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
    int testcase = 1;
    //cin >> testcase;
    while(testcase--){
        solve();
    }
}              
