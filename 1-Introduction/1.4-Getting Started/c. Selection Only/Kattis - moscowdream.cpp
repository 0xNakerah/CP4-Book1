//problem link: https://open.kattis.com/contests/eqnk5p/problems/moscowdream

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int a,b,c,n; cin >> a >> b >> c >> n;
	cout << (a && b && c && (a+b+c>=n) && (n>=3)?"YES":"NO") << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
