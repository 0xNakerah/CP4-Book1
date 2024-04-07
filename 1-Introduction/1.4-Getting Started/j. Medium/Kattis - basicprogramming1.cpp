//problem link: https://open.kattis.com/problems/basicprogramming1s

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second

void solve(){
	int n,t; cin >> n >> t;
	ll arr[n], sum = 0, ev = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
		if(!(arr[i]&1))ev+=arr[i];
	}
	
	if(t==1)cout<<7<<'\n';
	else if(t==2){
		if(arr[0]==arr[1])cout<<"Equal\n";
		else cout<<(arr[0]>arr[1]?"Bigger":"Smaller")<<'\n';
	}else if(t==3){
		sort(arr,arr+3);
		cout<<arr[1]<<'\n';
	}else if(t==4){
		cout << sum << '\n';
	}else if(t==5){
		cout << ev << '\n';
	}else if(t==6){
		for(int i = 0; i < n; i++){
			cout << char((arr[i]%26)+'a');
		}cout << '\n';
	}else{
		bool vis[n]{0};
		int idx = 0;
		while(true){
			vis[idx]=true;
			idx = arr[idx];
			if(idx >= n || idx < 0){
				cout << "Out\n";
				break;
			}else if(idx == n-1){
				cout << "Done\n";
				break;
			}
			if(vis[idx]){
				cout << "Cyclic\n";
				break;
			}
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
