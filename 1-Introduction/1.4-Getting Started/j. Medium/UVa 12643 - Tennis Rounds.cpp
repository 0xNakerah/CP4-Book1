//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4391

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
	int n,a,b,round;
	while(cin >> n >> a >> b){
		vector<int> v((1<<n));
		for(int i = 0; i < (1<<n); i++)v[i]=i+1;
		round = 0;
		bool ok = false;
		while(true){
			vector<int> v2;
			round++;
			for(int i = 0; i < sz(v); i+=2){
				if((v[i]==a&&v[i+1]==b)||(v[i]==b&&v[i+1]==a)){
					cout << round << '\n';
					ok = true;
					break;
				}else if(v[i]==a||v[i+1]==a){
					v2.PB(a);
				}else if(v[i]==b||v[i+1]==b){
					v2.PB(b);
				}else{
					v2.PB(v[i]);
				}
			}
			if(ok)break;
			v = v2;
		}
	}	
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
