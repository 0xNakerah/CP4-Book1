//problem link: https://open.kattis.com/problems/mia

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

int get_score(int x, int y){
	if(x<y)swap(x,y);
	if(x==2&&y==1){
		return 1e6;
	}
	if(x==y){
		return x * 1e5;
	}
	return x*10+y;
}

void solve(){
	while(true){
		int a,b,c,d; cin >> a >> b >> c >> d;
		if(!a&&!b&&!c&&!d)break;	
		a = get_score(a,b), c = get_score(c,d);
		if(a>c)cout<<"Player 1 wins.\n";
		else cout << (a==c?"Tie.":"Player 2 wins.") << '\n';
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
