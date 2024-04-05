//problem link: https://open.kattis.com/contests/kp6ndf/problems/licensetolaunch

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int n,day,mn=INT_MAX; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x < mn){
			mn = x;
			day = i;
		}
	}
	cout << day << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
