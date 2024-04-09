//problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3399

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
	int arr[5], vis[53];
	while(true){
		memset(vis,0,sizeof(vis));
		for(int i = 0; i < 5; i++){
			cin >> arr[i];
			vis[arr[i]]=true;
		}
		if(!arr[0])break;
		sort(arr,arr+3);
		sort(arr+3,arr+5);
		
		int ans = -1, x = INT_MAX;
		if(arr[3]>arr[2])x=0;
		else if(arr[3]>arr[1])x=arr[1];
		else if(arr[4]>arr[2])x=arr[2];
		
		for(int i = 1; i < 53; i++){
			if(i>x&&!vis[i]){
				ans = i;
				break;
			}
		}
		cout << ans << '\n';
	}
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	// cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
	}
} 	 		   			  	
