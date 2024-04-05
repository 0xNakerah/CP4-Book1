//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3431

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	for(int i = 1; ; i++){
		int n,a=0,b=0; cin >> n;
		if(!n)break;
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			if(!x)a++;
			else b++;
		}
		cout << "Case " << i << ": " << b-a << '\n';
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
