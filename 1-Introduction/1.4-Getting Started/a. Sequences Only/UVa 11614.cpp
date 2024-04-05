//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2661

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	ll n; cin >> n;
	ll ans = (-1+sqrt(1 - 4*-2*n))/2;
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
