/*
	* Author :- Tanay Kulkarni
	* Date   :- 12-6-2021
	* Time   :- 19:34:15.787477
	* Name   :- solve.cpp
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
void testcase(){
	int n;
	cin>>n;
	set<int>uniques;
	map<int,vector<int>>ms;
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		uniques.insert(x);
		ms[x].push_back(i);
	}
	if(uniques.size() == 1){
		cout<<"0\n";
		return;
	}
	if(uniques.size() == n){
		cout<<"1\n";
		return;
	}

	int res = INT_MAX;
	for(auto i : uniques){
		vector<int>indices(0);
		int sz = 0;
		int two = 0;
		int tmp = 0;
		for(auto x :ms[i]){
			indices.push_back(x);
			sz++;
		}
		for(int j = 0;j+1 < sz;j++){
			if(indices[j+1]-indices[j] == 1){
				two++;
			}
		}
		if(indices[0] != 0)
			tmp++;
		if(indices[sz-1] != n-1)
			tmp++;
		tmp += sz-1-two;
		res = min(res,tmp);
	}
	cout<<res;
	puts("");
}
int main(){
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		// cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
