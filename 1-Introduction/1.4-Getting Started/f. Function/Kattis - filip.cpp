//problem link: https://open.kattis.com/contests/rkk8df/problems/filip

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()

void solve(){
	string a,b; cin >> a >> b;
	reverse(all(a)), reverse(all(b));
	if(a>=b)cout<<a<<'\n';
	else cout<<b<<'\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
