//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2307

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

int calc(int n){
	int res = 0;
	while(n){
		res += n%10;
		n /= 10;
	}
	if(res>9)res=calc(res);
	return res;
}

void solve(){
	int n;
	while(true){
		cin >> n;
		if(!n)break;
		int ans = calc(n);
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
