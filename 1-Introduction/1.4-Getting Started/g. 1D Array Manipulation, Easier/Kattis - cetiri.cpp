//problem link: https://open.kattis.com/contests/axe9s2/problems/cetiri

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int a,b,c; cin >> a >> b >> c;
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	if(a>b)swap(a,b);
	if(b-a==c-b)cout<<c+(c-b)<<'\n';
	else if(b-a>c-b)cout<<a+(c-b)<<'\n';
	else cout<<b+(b-a)<<'\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
