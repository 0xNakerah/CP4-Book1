//problem link: https://open.kattis.com/problems/fizzbuzz

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

void solve(){
	int x,y,n; cin >> x >> y >> n;
	for(int i = 1; i <= n; i++){
		if(i % x == 0 && i % y == 0)cout<<"FizzBuzz\n";
		else if(i % x == 0)cout<<"Fizz\n";
		else if(i % y == 0)cout<<"Buzz\n";
		else cout<<i<<'\n';
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
