//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3166

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
	pair<string,int> arr[10];
	for(int j = 1; j <= t; j++){
		int mx = 0;
		for(int i = 0; i < 10; i++){
			cin >> arr[i].F >> arr[i].S;
			mx = max(mx, arr[i].S);
		}
		
		cout << "Case #" << j << ":\n";
		for(int i = 0; i < 10; i++){
			if(arr[i].S==mx)cout<<arr[i].F << '\n';
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
