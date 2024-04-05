//problem link: https://open.kattis.com/problems/timeloop

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		cout << i << ' ' << "Abracadabra\n";
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
