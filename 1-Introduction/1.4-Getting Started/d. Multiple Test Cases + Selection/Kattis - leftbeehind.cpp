//problem link: https://open.kattis.com/contests/qapmsy/problems/leftbeehind

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int a,b;
	while(true){
		cin >> a >> b;
		if(!a&&!b)break;
		if(a+b==13)cout<<"Never speak again.\n";
		else if(b>a)cout<<"Left beehind.\n";
		else if(a>b)cout<<"To the convention.\n";
		else if(a==b)cout<<"Undecided.\n";
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
