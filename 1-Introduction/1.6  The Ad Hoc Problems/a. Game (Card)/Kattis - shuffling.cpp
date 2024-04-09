//problem link: https://open.kattis.com/problems/shuffling

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
	int n; cin >> n;
	string s; cin >> s;
	vector<int> org(n);
	for(int i = 0; i < n; i++){
		org[i]=i;
	}
	int cnt = 0;
	vector<int> shuf1(n),shuf2(n);
	shuf1=org;
	while(true){
		cnt++;
		int p1,p2;
		if(s == "out"){
			if(n&1){
				p1=0,p2=n/2+1;
			}else{
				p1=0,p2=n/2;
			}
		}else{
			p1=n/2,p2=0;
		}
		for(int i = 0; i < n; i++){
			if(i&1){
				shuf2[i]=shuf1[p2++];
			}else{
				shuf2[i]=shuf1[p1++];
			}
		}
		if(shuf2==org)break;
		shuf1=shuf2;
	}
	cout << cnt << '\n';
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
