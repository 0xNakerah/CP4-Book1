//problem link: https://open.kattis.com/contests/v26fwu/problems/batterup

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
	double s=0,cnt=0,x;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x!=-1){
			cnt++;
			s+=x;
		}
	}
	cout << fixed << setprecision(3) << s/cnt << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
