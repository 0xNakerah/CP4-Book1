//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1365

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()

double calc(string s){
	int sum = 0, res = 0;
	for(int i = 0; i < sz(s); i++){
		if(isupper(s[i])){
			sum += (s[i]-'A'+1);
		}else if(islower(s[i])){
			sum += (s[i]-'a'+1);
		}
	}
	while((int)log10(sum)!=0){
		res = 0;
		while(sum){
			res += (sum%10);
			sum /= 10;
		}
		sum = res;
	}
	return sum;
}

void solve(){
	string a,b;
	while(getline(cin,a)){
		getline(cin,b);
		double x=calc(a), y=calc(b);
		double ans = min(y/x*100, x/y*100);
		cout << fixed << setprecision(2) << ans << " %\n";
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
