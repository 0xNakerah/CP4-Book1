//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2542

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n; cin >> n;
	n = abs(((((((n*567)/9)+7492)*235)/47)-498)/10);
	cout << n % 10 << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
