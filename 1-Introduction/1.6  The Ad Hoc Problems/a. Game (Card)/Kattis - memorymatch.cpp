//problem link: https://open.kattis.com/problems/memorymatch

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
	int n,k,a,b,ans=0,od=0,q=0; cin >> n >> k;
	vector<string> v(n,"11");
	string p1,p2;
	for(int i = 0; i < k; i++){
		cin >> a >> b >> p1 >> p2;
		a--,b--;
		if(p1==p2){
			v[a]=v[b]="-1";
		}else{
			v[a]=p1;
			v[b]=p2;
		}
	}
	map<string,bool> mp;
	for(int i = 0; i < n; i++){
		if(v[i]=="-1")continue;
		if(v[i]=="11")q++;
		else{
			if(mp.count(v[i])){
				ans++;
				od--;
			}else{
				od++;
			}
			mp[v[i]]=true;
		}
	}
	if(q==od)ans+=q;
	else if(q==2)ans++;
	cout << ans << '\n';
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
