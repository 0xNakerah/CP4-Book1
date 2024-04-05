//problem link: https://open.kattis.com/problems/temperature

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	double a,b; cin >> a >> b;
	if(!a&&b==1)cout<<"ALL GOOD\n";
	else{
		if(b==1)cout<<"IMPOSSIBLE\n";
		else cout << fixed << setprecision(6) << 0-(a/(b-1)) << '\n';
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
