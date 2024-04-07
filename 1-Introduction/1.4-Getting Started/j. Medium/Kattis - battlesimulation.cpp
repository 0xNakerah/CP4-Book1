//problem link: https://open.kattis.com/problems/battlesimulation

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
	string s; cin >> s;
	//BLR
	map<char,char> mp;
	mp['R']='S', mp['B']='K', mp['L']='H';
	for(int i = 0; i < sz(s); i++){
		if(i+2<sz(s)){
			string x = s.substr(i,3);
			sort(all(x));
			if(x=="BLR"){
				cout<<"C";
				i+=2;
			}
			else cout<<mp[s[i]]; 
		}else{
			cout<<mp[s[i]];
		}
	}
	cout << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		//cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
