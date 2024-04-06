//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2019

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int x, mx, ans = INT_MIN, n; cin >> n >> mx;
	for(int i = 1; i < n; i++){
		cin >> x;
		ans = max(ans,mx-x);
		mx = max(mx, x);
	}
	cout << ans << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
