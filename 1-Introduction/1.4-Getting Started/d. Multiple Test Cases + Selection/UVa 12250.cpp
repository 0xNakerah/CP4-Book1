//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3402

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	for(int i = 1; ; i++){
		string s; cin >> s;
		if(s=="#")break;
		cout << "Case " << i << ": ";
		if(s=="HELLO")cout<<"ENGLISH\n";
		else if(s=="HOLA")cout<<"SPANISH\n";
		else if(s=="HALLO")cout<<"GERMAN\n";
		else if(s=="BONJOUR")cout<<"FRENCH\n";
		else if(s=="CIAO")cout<<"ITALIAN\n";
		else if(s=="ZDRAVSTVUJTE")cout<<"RUSSIAN\n";
		else cout<<"UNKNOWN\n";
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
