//problem link: https://open.kattis.com/problems/qaly

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int n; cin >> n;
	double a,b,ans=0;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		ans += (a*b);
	}
	cout << fixed << setprecision(3) << ans << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
