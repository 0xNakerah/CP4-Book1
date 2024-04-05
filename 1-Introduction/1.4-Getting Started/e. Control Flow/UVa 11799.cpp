//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2899

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		int n, mx = 0; cin >> n;
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			mx = max(mx, x);
		}
		cout << "Case " << i << ": " << mx << '\n';
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
