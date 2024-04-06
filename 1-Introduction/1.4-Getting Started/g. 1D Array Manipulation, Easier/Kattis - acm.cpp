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
	int t, num = 0, tot = 0; 
	char p;
	string stat;
	
	int arr[26]{0};
	bool solved[26]{0};
	while(true){
		cin >> t;
		if(t==-1)break;
		cin >> p >> stat;
		if(stat=="right"&&!solved[p-'A']){
			num++;
			tot += t+arr[p-'A'];
		}else arr[p-'A']+=20;
	}
	cout << num << ' ' << tot << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
