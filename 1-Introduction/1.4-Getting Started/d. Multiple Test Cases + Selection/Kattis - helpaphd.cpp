//problem link: https://open.kattis.com/contests/u2ku83/problems/helpaphd

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		string s; cin >> s;
		if(s=="P=NP")cout<<"skipped\n";
		else{
			int idx;
			for(int j = 0; j < sz(s); j++){
				if(s[j]=='+'){
					idx=j;
					break;
				}
			}
			cout << stoi(s.substr(0,idx)) + stoi(s.substr(idx+1, sz(s)-idx-1)) << '\n';
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
