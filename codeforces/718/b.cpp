/*
	Author :- Tanay Kulkarni
	Date   :- 24-4-2021
	Time   :- 20:26:46.940325
	Name   :- solve.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
multiset<pair<int,int>>mx;

void testcase(){
	
	int n,m;
	cin>>n>>m;
	int ans[n][m];
	mx.clear();
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			ans[i][j] = -1;
			int x;
			cin>>x;
			mx.insert({x,i});
		}
	}
	for(int i = 0;i<m;i++){
		auto k = mx.begin();
		ans[k->second][i] = k->first;
		mx.erase(k);
	}
	
	while(!mx.empty()){	
		int index = 0;
		auto k = mx.begin();
		while(ans[k->second][index] != -1)
			index++;
		ans[k->second][index] = k->first;
		mx.erase(k);
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
		puts("");
	}
	
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		///cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
