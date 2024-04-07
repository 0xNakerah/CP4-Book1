//problem link: https://open.kattis.com/problems/bitsequalizer

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define PB push_back

void solve(){
	string s,t; cin >> s >> t;
	int z=0,o=0,q=0,s1=0,t1=0;
	for(int i = 0; i < sz(s); i++){
		if(s[i]!=t[i]){
			z += (s[i]=='0');
			o += (s[i]=='1');
			q += (s[i]=='?');
		}
		s1 += (s[i]=='1');
		t1 += (t[i]=='1');
	}
	if(s1>t1)return void(cout<<-1<<'\n');
	int ans = min(z,o);
	z -= ans, o -= ans;
	cout << ans + o + z + q << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
