//problem link: https://open.kattis.com/contests/ejut3e/problems/provincesandgold

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int g,s,c,sum; cin >> g >> s >> c;
	sum = g*3 + s*2 + c;
	if(sum>1){
		if(sum>=7)cout<<"Province";
		else if(sum>=5)cout<<"Duchy";
		else cout<<"Estate";
		cout << " or ";
	}
	if(sum>=6)cout<<"Gold\n";
	else if(sum>=3)cout<<"Silver\n";
	else cout<<"Copper\n";
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
