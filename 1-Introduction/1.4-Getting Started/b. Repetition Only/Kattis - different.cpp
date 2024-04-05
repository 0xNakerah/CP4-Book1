//problem link: https://open.kattis.com/problems/different

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	ll a,b;
	while(cin >> a >> b){
		cout << abs(a-b) << '\n';
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
