//problem link: https://open.kattis.com/problems/digits

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	string s;
	while(true){
		cin >> s;
		if(s=="END")break;
		string x = s, y;
		for(int i = 1; ; i++){
			y = to_string(sz(x));
			if(y==x){
				cout << i << '\n';
				break;
			}
			x = y;
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
