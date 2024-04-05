//problem link: https://open.kattis.com/contests/kmw87t/problems/quadrant

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int x,y; cin >> x >> y;
	if(x>0)cout<<(y>0?1:4)<<'\n';
	else cout<<(y>0?2:3)<<'\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
