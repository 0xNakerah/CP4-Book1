//problem link: https://open.kattis.com/contests/naq17open/problems/oddgnome

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int n,a,b,c,ans=0; cin >> n >> a >> b;
	for(int i = 3; i <= n; i++){
		cin >> c;
		if(b < a && c > a)ans=i-1;
		else if(c < b && c > a)ans=i-1;
		a = b; b = c;
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
