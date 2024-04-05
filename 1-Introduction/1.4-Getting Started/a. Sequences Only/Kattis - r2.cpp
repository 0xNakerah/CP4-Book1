//problem link: https://open.kattis.com/problems/r2

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int r1, s; cin >> r1 >> s;
	cout << 2*s - r1 << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
