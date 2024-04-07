//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2502

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
	map<pair<string,string>,string> chng;
	
	//intial x
	chng[{"+x","+y"}]="+y";
	chng[{"+x","-y"}]="-y";
	chng[{"+x","+z"}]="+z";
	chng[{"+x","-z"}]="-z";
	chng[{"-x","+y"}]="-y";
	chng[{"-x","-y"}]="+y";
	chng[{"-x","+z"}]="-z";
	chng[{"-x","-z"}]="+z";
	
	//initial y
	chng[{"+y","+y"}]="-x";
	chng[{"+y","-y"}]="+x";
	chng[{"+y","+z"}]="+y";
	chng[{"+y","-z"}]="+y";
	chng[{"-y","+y"}]="+x";
	chng[{"-y","-y"}]="-x";
	chng[{"-y","+z"}]="-y";
	chng[{"-y","-z"}]="-y";
	
	//initial z
	chng[{"+z","+y"}]="+z";
	chng[{"+z","-y"}]="+z";
	chng[{"+z","+z"}]="-x";
	chng[{"+z","-z"}]="+x";
	chng[{"-z","+y"}]="-z";
	chng[{"-z","-y"}]="-z";
	chng[{"-z","+z"}]="+x";
	chng[{"-z","-z"}]="-x";
	
	while(true){
		int l; cin >> l;
		if(!l)break;
		string cur = "+x";
		for(int i = 1; i < l; i++){
			string dir; cin >> dir;
			if(dir!="No")cur = chng[{cur,dir}];
		}
		cout << cur << '\n';
	}
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
