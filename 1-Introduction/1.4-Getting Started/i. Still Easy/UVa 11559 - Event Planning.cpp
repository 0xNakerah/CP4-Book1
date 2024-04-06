//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2595

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int a,b,c,d;
	while(cin >> a >> b >> c >> d){
		int mn = INT_MAX;
		for(int i = 0; i < c; i++){
			int p; cin >> p;
			for(int j = 0; j < d; j++){
				int beds; cin >> beds;
				if(beds>=a){
					mn = min(mn, a*p);
				}
			}
		}
		if(mn<=b)cout<<mn<<'\n';
		else cout<<"stay home\n";
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
