//problem link: https://open.kattis.com/problems/tarifa

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int x,n,ans=0; cin >> x >> n;
	for(int i = 0; i < n; i++){
		ans += x;
		int used; cin >> used;
		ans -= used;
	}
	cout << ans+x << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
