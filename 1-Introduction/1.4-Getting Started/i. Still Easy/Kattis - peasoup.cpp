//problem link: https://open.kattis.com/problems/peasoup

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
	string ans = "0";
	for(int i = 0; i < n; i++){
		int k; cin >> k;
		cin.ignore();
		string name; getline(cin,name);
		bool pea=false,pan=false;
		for(int j = 0; j < k; j++){
			string s;
			getline(cin,s);
			if(s=="pea soup")pea=true;
			if(s=="pancakes")pan=true;
		}
		if(pea&&pan&&ans=="0")ans=name;
	}
	cout<< (ans!="0"?ans:"Anywhere is fine I guess") << '\n';
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	//cin >> testcase;
	while(testcase--){
		solve();
	}
} 	 		   			  	
