//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3309

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int n; cin >> n;
	int cnt1=0, cnt2=0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		cnt1 += ((x+30)/30*10);
		cnt2 += ((x+60)/60*15);
	}
	if(cnt1==cnt2)cout<<"Mile Juice " << cnt1 << '\n';
	else if(cnt1<cnt2)cout<<"Mile " << cnt1 << '\n';
	else cout << "Juice " << cnt2 << '\n';
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
