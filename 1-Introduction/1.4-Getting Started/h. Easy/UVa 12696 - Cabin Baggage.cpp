//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4434

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int t,cnt=0; cin >> t;
	for(int i = 1; i <= t; i++){
		double a,b,c,d; cin >> a >> b >> c >> d;
		if(d<=7 && ( (a<=56&&b<=45&&c<=25) || (a+b+c<=125) )){
			cout << 1 << '\n';
			cnt++;
		}else{
			cout << 0 << '\n';
		}
	}
	cout << cnt << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
