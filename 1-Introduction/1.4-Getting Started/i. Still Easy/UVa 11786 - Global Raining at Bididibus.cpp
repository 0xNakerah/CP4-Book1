//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2886

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		string s; cin >> s;
		int ans = 0;
		stack<int> pos;
		for(int i = 0; i < sz(s); i++){
			if(s[i]=='/'&&!pos.empty()){
				int st = pos.top();
				pos.pop();
				ans += i-st;
			}else if(s[i]=='\\'){
				pos.push(i);
			}
		}
		cout << ans << '\n';
	}
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
