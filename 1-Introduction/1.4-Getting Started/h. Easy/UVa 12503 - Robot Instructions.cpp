//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3947

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		int n; cin >> n;
		int arr[n+1]{0}, pos = 0;
		for(int j = 1; j <= n; j++){
			string s; cin >> s;
			if(s=="LEFT"){
				arr[j]=-1;
				pos--;
			}else if(s=="RIGHT"){
				arr[j]=1;
				pos++;
			}else{
				cin >> s;
				int idx; cin >> idx;
				arr[j]=arr[idx];
				pos += arr[j];
			}
		}
		cout << pos << '\n';
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
