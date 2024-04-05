//problem link: https://open.kattis.com/contests/yjxn9n/problems/statistics

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int n;
	for(int i = 1; cin >> n; i++){
		int x, mx = INT_MIN, mn = INT_MAX; 
		for(int j = 0; j < n; j++){
			cin >> x;
			mx = max(mx, x);
			mn = min(mn, x);
		}
		cout << "Case " << i << ": " << mn << ' ' << mx << ' ' << mx-mn << '\n';
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
