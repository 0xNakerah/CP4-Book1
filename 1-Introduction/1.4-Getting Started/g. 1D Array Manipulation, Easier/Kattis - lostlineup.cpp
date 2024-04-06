//problem link: https://open.kattis.com/problems/lostlineup

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()

void solve(){
	int n; cin >> n;
	int arr[n],x; arr[0]=1;
	for(int i = 2; i <= n; i++){
		cin >> x;
		arr[x+1]=i;
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << ' ';
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
