//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3794

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		int a,b,c; cin >> a >> b >> c;
		cout << "Case " << i << ": ";
		cout << (a<=20 && b<=20 && c<=20?"good":"bad") << '\n';
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
