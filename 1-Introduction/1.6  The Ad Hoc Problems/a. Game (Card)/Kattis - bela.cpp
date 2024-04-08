//problem link: https://open.kattis.com/problems/bela

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
	map<char,int> d,nd;
	d['A']=nd['A']=11;
	d['K']=nd['K']=4;
	d['Q']=nd['Q']=3;
	d['T']=nd['T']=10;
	d['8']=nd['8']=d['7']=nd['7']=0;
	d['9']=14,nd['9']=0;
	d['J']=20,nd['J']=2;
	int n,ans=0; char dom; cin >> n >> dom;
	for(int i = 0; i < 4*n; i++){
		string s; cin >> s;
		if(s[1]==dom)ans+=d[s[0]];
		else ans+=nd[s[0]];
	}
	cout<<ans<<'\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	// cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
