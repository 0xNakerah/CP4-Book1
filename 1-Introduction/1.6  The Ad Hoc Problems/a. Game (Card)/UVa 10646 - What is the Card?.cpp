//problem link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1587

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
	vector<string> cards(52);
	for(int i = 0; i < 52; i++){
		cin >> cards[i];
	}
	
	reverse(all(cards));
	int y = 0, idx = 25;
	for(int i = 0; i < 3; i++){
		int val = (cards[idx][0]>='2'&&cards[idx][0]<='9'?cards[idx][0]-'0':10);
		y += val;
		idx += (11-val);
	}
	
	int cnt = 0;
	for(int i = 52; i >= 0; i--){
		if(i<=idx&&i>=25)continue;
		cnt++;
		if(cnt==y){
			cout << cards[i] << '\n';
			return;
		}
	}
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
