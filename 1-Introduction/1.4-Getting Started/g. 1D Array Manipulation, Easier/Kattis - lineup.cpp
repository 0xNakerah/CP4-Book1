//problem link: https://open.kattis.com/problems/acm

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
	string arr[n]; cin >> arr[0] >> arr[1];
	bool inc = (arr[1]>arr[0]);
	for(int i = 2; i < n; i++){
		cin >> arr[i];
		if((arr[i]>arr[i-1])!=inc){
			cout << "NEITHER\n";
			return;
		}
	}
	cout <<(inc?"INCREASING":"DECREASING") << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
