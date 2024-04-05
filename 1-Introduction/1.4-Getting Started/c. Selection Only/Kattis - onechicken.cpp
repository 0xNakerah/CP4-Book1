//problem link: https://open.kattis.com/contests/sph4br/problems/onechicken

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n,m; cin >> n >> m;
	if(m>n){
		cout << "Dr. Chaz will have " << m-n << (m-n>1?" pieces":" piece") << " of chicken left over!\n";
	}else{
		cout << "Dr. Chaz needs " << n-m << (n-m>1?" more pieces":" more piece") << " of chicken!\n";
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
