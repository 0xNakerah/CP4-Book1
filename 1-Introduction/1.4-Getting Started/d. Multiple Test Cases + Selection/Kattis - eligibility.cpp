//problem link: https://open.kattis.com/problems/eligibility

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back

void solve(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		string name, start, birth; cin >> name >> start >> birth;
		int courses; cin >> courses;
		cout << name << ' ';
		if(start.substr(0,4)>="2010" || birth.substr(0,4)>="1991"){
			cout << "eligible\n";
		}else{
			if(courses>40)cout<<"ineligible\n";
			else cout<<"coach petitions\n";
		}
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
