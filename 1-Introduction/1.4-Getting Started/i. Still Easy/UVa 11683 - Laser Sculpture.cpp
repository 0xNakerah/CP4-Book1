//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2730

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	while(true){
		int n,m,ans=0,mn; cin >> n;
		if(!n)break;
		cin >> m; mn = n;
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			if(x<mn){
				ans+=mn-x;
			}
			mn = x;
		}
		cout<<ans<<'\n';
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
