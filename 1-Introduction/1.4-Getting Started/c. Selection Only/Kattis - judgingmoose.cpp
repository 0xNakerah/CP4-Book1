//problem link: https://open.kattis.com/contests/t4p482/problems/judgingmoose

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int l,r	; cin >> l >> r;
	if(!l&&!r)cout<<"Not a moose\n";
	else{
		if(l==r)cout<<"Even " << l+r << '\n';
		else cout << "Odd " << max(l,r)*2 << '\n';
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
