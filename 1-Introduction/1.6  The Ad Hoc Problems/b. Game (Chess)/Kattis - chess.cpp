//problem link: https://open.kattis.com/problems/chess

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define PB push_back

bool valid(int i, int j){
	return (i>=0&&i<8&&j>=0&&j<8);
}

char a,b,c,d;
bool ok;

void get_ans(vector<pair<char,char>> x){
	if(ok)return;
	if(x.back().F == c && x.back().S == d){
		cout << sz(x)-1;
		for(auto &p: x){
			cout << ' ' << p.F << ' ' << p.S;
			ok = true;
		}
		cout << '\n';
		return;
	}
	if(sz(x)>=5)return;
	
	for(int i = 1; i < 8; i++){
		for(int j = 0; j < 4; j++){
			int nx = x.back().F-'A', ny = x.back().S-'1';
			if(1&j)nx+=i;
			else nx-=i;
			if(2&j)ny+=i;
			else ny-=i;
			if(valid(nx,ny)){
				x.PB({char(nx+'A'),char(ny+'1')});
				get_ans(x);
				x.pop_back();
			}
		}
	}
	
}

void solve(){
	cin >> a >> b >> c >> d;
	ok = false;
	vector<pair<char,char>> x;
	x.PB({a,b});
	
	get_ans(x);
	if(!ok)cout<<"Impossible\n";
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
