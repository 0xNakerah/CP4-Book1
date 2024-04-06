//problem link: https://open.kattis.com/problems/hissingmicrophone

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	string s; cin >> s;
	for(int i = 1; i < sz(s); i++){
		if(s[i]=='s'&&s[i-1]=='s'){
			cout << "hiss\n";
			return;
		}
	}
	cout << "no hiss\n";
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
