//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2864

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		int n, a, b, h = 0, l = 0; cin >> n;
		if(!n){
			cout << "Case " << i << ": " << h << ' ' << l << '\n';
			break;
		}
		cin >> a;
		for(int j = 1; j < n; j++){
			cin >> b;
			if(b>a)h++;
			else if(a>b)l++;
			a = b;
		}
		cout << "Case " << i << ": " << h << ' ' << l << '\n';
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
