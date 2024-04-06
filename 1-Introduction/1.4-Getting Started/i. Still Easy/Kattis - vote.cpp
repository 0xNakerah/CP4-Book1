//problem link: https://open.kattis.com/problems/vote

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		int n,all=0,mx=-1,ans=-1; cin >> n;
		bool win=false;
		for(int j = 1; j <= n; j++){
			int x; cin >> x;
			all += x;
			if(x>mx){
				mx = x;
				ans = j;
				win = true;
			}else if(x==mx){
				win = false;
			}
		}
		if(win){
			cout << (mx>all/2?"majority winner ":"minority winner ") << ans << '\n';
		}else{
			cout << "no winner\n";
		}
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
