//problem link: https://open.kattis.com/contests/qkpvpj/problems/oddities

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		cout << x << " is ";
		cout << (x&1?"odd":"even") << '\n';
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
