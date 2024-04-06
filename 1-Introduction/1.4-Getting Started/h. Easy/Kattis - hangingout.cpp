//problem link: https://open.kattis.com/problems/hangingout

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int l,x,cnt=0,num,cur=0; cin >> l >> x;
	string s;
	for(int i = 0; i < x; i++){
		cin >> s >> num;
		if(s=="enter"){
			if(cur+num<=l)cur += num;
			else cnt++;
		}else{
			cur -= num;
		}
	}
	cout << cnt << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
