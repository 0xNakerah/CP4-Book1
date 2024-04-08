//problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1329

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PB push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define PB push_back


void move(queue<char> &from, queue<char> &to){
	while(!from.empty()){
		to.push(from.front());
		from.pop();
	}
}

void print(queue<char> q){
	stack<char> st;
	while(!q.empty()){
		st.push(q.front());
		q.pop();
	}
	
	while(!st.empty()){
		cout << st.top();
		st.pop();
	}
	cout << '\n';
}

void solve(){
	string a,b; cin >> a >> b;
	
	int n = sz(a);
	queue<char> cur1,cur2,p1,p2;
	for(int i = 0; i < n; i++){
		cur1.push(a[i]);
		cur2.push(b[i]);
	}
	
	for(int i = 1; i <= 1000; i++){
		char x = cur1.front(), y = cur2.front();
		cur1.pop(); cur2.pop();
		p1.push(x); p2.push(y);
		
		if(x==y){
			int rndm = random()/141%2;
			if(rndm){
				cout << "Snap! for John: ";
				move(p1,p2);				
				print(p2);
			}else{
				cout << "Snap! for Jane: ";
				move(p2,p1);
				print(p1);
			}
		}
		
		if(cur1.empty()){
			if(p1.empty()){
				cout << "John wins.\n";
				return;
			}
			move(p1,cur1);
		}
		if(cur2.empty()){
			if(p2.empty()){
				cout << "Jane wins.\n";
				return;
			}
			move(p2,cur2);
		}
	}
	
	cout << "Keeps going and going ...\n";
}

int main(){
  ios_base::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL);
	int testcase = 1;
	cin >> testcase;
	for(int i = 1; i <= testcase; i++){
		// cout << "Case " << i << ": ";
		solve();
		if(i<testcase)cout<<'\n';
	}
} 	 		   			  	
