//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2726

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()

void solve(){
	int a,b;
	while(true){
		cin >> a >> b;
		if(!a&&!b)break;
		int arr[20];
		for(int i = 0; i < a; i++){
			cin >> arr[i];
		}
		
		for(int i = 0; i < b; i++){
			int x,y,z; cin >> x >> y >> z;
			arr[x-1]-=z;
			arr[y-1]+=z;
		}
		
		bool flag = false;
		for(int i = 0; i < a; i++){
			if(arr[i]<0){
				flag = true;
				break;
			}
		}
		cout << (flag?"N":"S") << '\n';
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
