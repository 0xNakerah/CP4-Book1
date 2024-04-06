//problem link: https://open.kattis.com/problems/bubbletea

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int m; cin >> m;
	int top[m];
	for(int i = 0; i < m; i++){
		cin >> top[i];
	}
	int mn = INT_MAX;
	for(int i = 0; i < n; i++){
		int k; cin >> k;
		for(int j = 0; j < k; j++){
			int x; cin >> x;
			mn = min(mn, arr[i]+top[x-1]);
		}
	}
	int x; cin >> x;
	cout << max(0, x/mn-1) << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
