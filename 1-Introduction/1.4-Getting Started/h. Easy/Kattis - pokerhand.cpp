//problem link: https://open.kattis.com/problems/pokerhand

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	map<char,int> mp;
	for(int i = 0; i < 5; i++){
		string s; cin >> s;
		mp[s[0]]++;
	}
	int mx = 1;
	for(auto &p: mp){
		mx = max(mx, p.S);
	}
	cout << mx << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
