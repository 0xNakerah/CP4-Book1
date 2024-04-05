//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2113

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int a,b; cin >> a >> b;
		if(a==b)cout<<"=\n";
		else cout << (a>b?">":"<") << '\n';
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
