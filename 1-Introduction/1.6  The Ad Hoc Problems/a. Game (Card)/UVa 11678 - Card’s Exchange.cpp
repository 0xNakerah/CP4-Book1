//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2725

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define PB push_back

void solve(){
	int a,b,x;
	while(true){
		cin >> a >> b;
		if(!a&&!b)break;
		set<int> st1,st2,both;
		for(int i = 0; i < a; i++){
			cin >> x;
			st1.insert(x);
			both.insert(x);
		}
		for(int i = 0; i < b; i++){
			cin >> x;
			st2.insert(x);
			both.insert(x);
		}
		cout << min(sz(both)-sz(st1), sz(both)-sz(st2)) << '\n';
	}
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	// cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
