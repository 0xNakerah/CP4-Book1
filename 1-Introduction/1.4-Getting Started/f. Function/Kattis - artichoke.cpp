//problem link: https://open.kattis.com/problems/artichoke

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

double p,a,b,c,d;

double calc(int x){
	return (p*(sin(a*x+b)+cos(c*x+d)+2));
}

void solve(){
	int n; cin >> p >> a >> b >> c >> d >> n;
	double x,mx,ans = 0;
	cin >> mx; mx = calc(1);
	for(int i = 2; i <= n; i++){
		x = calc(i);
		ans = max(ans, mx-x);
		mx = max(mx, x);
	}
	cout << fixed << setprecision(6) << ans << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
