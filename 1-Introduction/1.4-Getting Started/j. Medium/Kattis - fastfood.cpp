//problem link: https://open.kattis.com/problems/fastfood

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define PB push_back

void solve(){
	int n,m,ans=0; cin >> n >> m;
	vector<int> arr[n];
	int cash[n], freq[m];
	for(int i = 0; i < n; i++){
		int k; cin >> k;
		for(int j = 0; j < k; j++){
			int x; cin >> x;
			arr[i].PB(x-1);
		}
		cin >> cash[i];
	}
	for(int i = 0; i < m; i++){
		cin >> freq[i];
	}
	for(int i = 0; i < n; i++){
		int mn = INT_MAX;
		for(int j = 0; j < sz(arr[i]); j++){
			mn = min(mn,freq[arr[i][j]]);
		}
		ans += mn*cash[i];
	}
	cout << ans << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
