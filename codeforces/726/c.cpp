/*
	* Author :- Tanay Kulkarni
	* Date   :- 19-6-2021
	* Time   :- 12:24:39.928975
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
	vector<int>arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr.begin(), arr.end());
	vector<int>res(n);
	pair<int,int>mn = {0,n-1};
	for(int i = 0;i+1<n;i++){	
		int g1 = abs(arr[mn.first]-arr[mn.second]);
		int g2 = abs(arr[i]-arr[i+1]);
		if(g2 < g1)
			mn = {i,i+1};
	}
	res[0] = arr[mn.first];
	res[n-1] = arr[mn.second];
	swap(arr[0],arr[mn.first]);
	swap(arr[n-1],arr[mn.second]);
	vector<int>greater;
	vector<int>smaller;
	for(int i = 1;i<n-1;i++){
		if(arr[i] >= arr[0])
			greater.push_back(arr[i]);
		else
			smaller.push_back(arr[i]);
	}
	sort(greater.begin(), greater.end());
	sort(smaller.begin(), smaller.end());
	int pnt = 1;
	for(int i : greater){
		res[pnt] = i;
		pnt++;
	}
	for(int i : smaller){
		res[pnt] = i;
		pnt++;
	}
	for(int i : res)
		cout<<i<<" ";
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
